#include<iostream>
using namespace std;

class Intializer
{
    private:
    string name;
    int age;
    float height;
    bool status;

    public:
    //makin the prototype of the constructor
    Intializer(); //Default
    Intializer(string name, int age, float height);
    Intializer(string name, int age, float height, bool status);

    void display();
};

Intializer::Intializer(string name, int age, float height) : name{name}, age{age}, height{height}, status{true} {}

Intializer::Intializer(string name, int age, float height, bool status) : name{name}, age{age}, height{height}, status{status} {
    if (status==1)
    {
        cout<<"\nPerson is coming to Interview\n "<<endl;
    }
    
}

void Intializer::display(){
    cout<<"\nName of the person: "<<name<<endl;
    cout<<"\nAge of the person: "<<age<<endl;
    cout<<"\nHeight of the person: "<<height<<endl;
    cout<<"\nAvailability of the person: "<<status<<endl;

}

int main()
{
    Intializer body_1{"Mukul", 24, 1, 1};

    body_1.display();



//Type your code here
return 0;
}