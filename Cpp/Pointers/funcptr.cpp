#include<iostream>

using namespace std;


int max(int y, int z, int x){
    cout<< x << endl;
    if (x==1)
    {
        cout<< y << z <<endl;
    }
    return 0;
} 

void display(int x, int y, int z){
    cout<<"Displaying from display"<<endl;
} 

int main()
{
    const int c = 56;

    string s = "Mukul";
    s = "Ritika"; 

    string m = s;
    cout<< &s <<endl;
    cout<< &m <<endl;

    // cout<<c<<endl;

    // c = 45; //Mutable 

    // cout<<c<<endl;

    void (*fun_ptr)(int,int,int);
    //max(9,8);
    return 0;
}