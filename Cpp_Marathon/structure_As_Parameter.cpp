/*
* Call by value
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void func(struct Rectangle rec) 
{
    rec.length = 20; //Length is increased but it will not change
    cout<<"The length: "<<rec.length<<endl;
    cout<<"The breadth: "<<rec.breadth<<endl;
};


int main()
{
    struct Rectangle r = {10,5}; //Actual, parameters so the will not change in call by value`
    func(r);
    cout<<"the main function length: "<<r.length<<endl;
    cout<<"The main function breadth"<<r.breadth<<endl; 
    return 0;
}

//Call by address 