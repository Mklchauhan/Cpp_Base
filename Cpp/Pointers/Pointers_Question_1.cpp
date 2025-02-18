/*
* If char *p; and int *q;, and both are pointing to the same memory address, 
* what happens when p++ and q++ are executed?
*/

#include<iostream>

using namespace std;

int main()
{
    char arr[10];
    char *ptr = arr;
    int *ptr_1 = (int*)arr;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr_1)<<endl;
    cout<<"Before the increment"<<endl;
    cout << (void*)(ptr)<<endl;
    cout << (void*)(ptr_1)<<endl;
    cout<<"After the increment"<<endl;
    cout<<(void*)(ptr+1)<<endl;
    cout<<(void*)(ptr_1+1)<<endl;
    return 0;
}