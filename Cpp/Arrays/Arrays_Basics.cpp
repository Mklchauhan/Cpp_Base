#include<stdio.h>
#include<iostream>
//#define Arr_size 5;
using namespace std;

int main(){
    int arr[5];

    // cout<<arr[1]<<endl;
    // //we can also use printf
    // printf("%d\n",arr[0]);
    //Taking the input into the integer array

    cout<<"Fill the array size"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    

    //Now we want to print all the elements of the array
    int count = sizeof(arr)/sizeof(int);
    for (int i = 0; i < count; i++)
    {
        cout <<arr[i];
        cout<<endl;
    }

    return 0;
}


