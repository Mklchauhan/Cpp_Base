/*
* Call by address structure as a parameter
* Actual parameter is also changed
*/

#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void func(struct Rectangle *prec)
{
    prec->length = 6;
    prec->breadth = 20;
    cout<<"Func Length and Breadth"<< prec->length << " "<< prec->breadth<<endl;
}


int main()
{
    struct Rectangle r = {10,6};
    func(&r);
    cout<<"Main Length and Breadth"<< r.length << " "<< r.breadth<<endl;
//Type your code here
return 0;
}