//Pass by refernece
#include<iostream>
using namespace std;

void swap(int &a, int&b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x = 10;
    int y = 20;
    swap(x,y);
    cout<<"Swapped Number"<<x<<" and "<<y<<endl;
    return 0;
}