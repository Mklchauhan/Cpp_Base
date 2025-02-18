/*
* creating a variable type of structure in the heap inside a function and return its address
*/
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *func(){
    struct Rectangle *p;
    p = new Rectangle;
    p->breadth = 15;
    p->length = 10;

    return p;
}

int main()
{
    struct Rectangle *ptr = func();
    cout<<"Length"<<ptr->length<<endl;
    cout<<"Breadth"<<ptr->breadth<<endl;
    return 0;
}