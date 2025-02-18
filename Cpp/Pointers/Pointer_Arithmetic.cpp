/*
* Pointers can be incremented or decremented to traverse contiguous memory blocks (useful for arrays).
* Array's name act as a pointer we don't need to give &Arr, Here only give *ptr = Arr;
*/

#include<iostream>

using namespace std;

int main()
{
    int Arr[] = {10,20,30,40,50};
    int *ptr = Arr;

    cout<<"The member of the array"<<endl;
    for (int i = 0; i < sizeof(Arr)/sizeof(int); i++)
    {
        //Here, It will show error
        //cout<< *ptr[i]<<endl;

        //This is the first way to print the array 
        //cout<< ptr[i] <<endl;

        //This is another way to print
        cout<<"First value of the printer: "<<*(ptr+i)<<endl;
    }
    

return 0;
}