/*
* Modular programming and Monolithic programming 
* Functions => Modular Programming
* Monolithic programming => Full structure Programming 
*/

#include<iostream>

using namespace std;

//call by value example
int add(int num1, int num2){
    int num_3 = num1+num2;

    return(num_3);
}

int main()
{
    int x,y,z;

    x = 10;
    y = 20;

    z = add(x,y);

    cout<<"The sum of two number: "<<z<< endl;


return 0;
}