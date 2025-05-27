/*
* Write a program to print a Binary representation of a given number. Microsoft
*/
#include<iostream>
using namespace std;

void printBinary(int n){
    for(int i = 31; i >= 0; i--){
        if(n & (1 << i)){
            cout << "1";
        }else{
            cout << "0";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    printBinary(n);

    return 0;
}