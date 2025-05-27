#include<iostream>
using namespace std;

class Delegating
{
    private:
    int a;
    int b;
    int c;

    public:

    Delegating();
    Delegating(int x, int y);
    Delegating(int x, int y, int z);
    void display();
};

// Delegating::Delegating():a{0}, b{0}, c{0} {}
// Delegating::Delegating(int x, int y):a{x}, b{y}, c{0} {}
// Delegating::Delegating(int x, int y, int z):a{x}, b{y}, c{z} {}

//Now, we will delegate it here

Delegating::Delegating():Delegating{0,0,0}{}
Delegating::Delegating(int x, int y):Delegating{x,y,0}{}
Delegating::Delegating(int x, int y,int z):a{x}, b{y}, c{z} {} //Main constructor for the system
Delegating::Delegating(const Delegating &source) : a{source.a}, b{source.b}, c{source.c} {
    cout << "\nCopy constructor called!" << endl;
}



void Delegating::display(){
    cout<<"\nName of the person: "<<a<<endl;
    cout<<"\nAge of the person: "<<b<<endl;
    cout<<"\nHeight of the person: "<<c<<endl;

}

int main()
{
    Delegating object(2,3,4);
    object.display();
    return 0;
}