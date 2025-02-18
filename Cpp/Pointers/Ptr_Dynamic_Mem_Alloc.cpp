/*
* Dynamic memory allows for allocating memory at runtime using new and releasing it with delete.
* Chalte chalte tum array ka size change kr skte ho
*/
#include<iostream>

using namespace std;

int main()
{
    //Here, New is allocating the memory in the heap
    int *ptr = new int; //Allocating memory only for a single integer
    *ptr = 100;
    cout<<"The value of ptr in the heap"<< *ptr<<endl;

    delete ptr;

    int *arr = new int[5];
    for (int i = 1; i < 6; i++)
    {
        arr[i] = i*10;
        cout<<arr[i]<<endl;
    }
    
    delete[] arr; //Remember this pointer to deallocate the contagious memory from the heap
    // it cause a memory of leak

    return 0;
}