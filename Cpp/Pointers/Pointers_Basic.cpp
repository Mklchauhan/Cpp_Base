/*
* A pointer is a variable that holds the memory address of another variable. It is declared using the * symbol.
* Key Concepts:
* & (Address-of operator): Gets the address of a variable.
* *(Dereference operator): Accesses the value at the memory address.
*
*/

#include<iostream>

using namespace std;

int main(){
    int var = 10;
    int *ptr = &var;

    cout<<"The value of var: "<<var<<endl;
    cout<<"The Address of var: "<<&var<<endl;
    cout<<"The vlaue of the ptr: "<<ptr<<endl;

    cout<<"The value of the var using pointer: "<< *ptr<<endl; //to get the value we are doing dereferencing of pointer

    return 0;
}