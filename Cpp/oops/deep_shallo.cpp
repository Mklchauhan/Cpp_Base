#include<iostream>
using namespace std;

class deep_shallo
{
    private:
    int number_1;
    int number_2;

    public:
    void setdata(int x, int y){
        number_1 = x;
        number_2 = y;
    }
    void display(){
        cout<<"\nnumber_1: "<<number_1<<"\nnnumber_2: "<<number_2<<endl;
    }
};

int main()
{
    deep_shallo d1;

    d1.setdata(3,4);
    d1.display();

    deep_shallo d2;
    d2 = d1;

    d2.display();

//Type your code here
return 0;
}