/*
* call by address
* call by reference, only applicable in cpp
*
*/

#include<iostream>

using namespace std;

//call by address
void add(int *num1, int *num2){
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int x,y,z;

    x = 10;
    y = 20;

    add(&x,&y);

    cout<<"swapped numbers "<<x<<"and"<<y<< endl;


return 0;
}