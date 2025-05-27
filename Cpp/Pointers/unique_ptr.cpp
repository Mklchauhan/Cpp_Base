#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int(10);

    cout<<"Memory address of the pointer pointing to the heap: " << ptr<<endl;
    if (*ptr==10)
    {
        cout<<"I am available"<<endl;
    }

    delete ptr;
    
    cout<< *ptr << endl;
//Type your code here
return 0;
}