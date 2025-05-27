/*
* File Author: Mukul Chauhan
* Description: This file creates the Array and display the array in the heap
*/

#include<iostream>
using namespace std;

class Make_Array
{
    public:
    int *A;
    int size;
    int length;

    Make_Array(int arr[], int size, int length);
    void display();
    void Take_input(int numbers);

    ~Make_Array();


};

Make_Array::Make_Array(int arr[], int size, int length): A{arr}, size{size}, length{length}{
    A = new int[size];
    for (int i = 0; i < length; i++) {
        A[i] = arr[i];
    }
}

// Display function: prints stored array
void Make_Array::display() {
    for (int i = 0; i < length; i++) {
        cout << A[i] << endl;
    }
}

void Make_Array::Take_input(int numbers){
    for (int i = 0; i < length; i++)
    {
        A[i[=cin>>numbers>>endl;
    }
    
}

// Destructor to release dynamic memory
Make_Array::~Make_Array() {
    delete[] A;
    cout << "Array destroyed." << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 10;
    int length = 5;

    Make_Array obj(arr, size, length);
    obj.display();

    return 0;
}