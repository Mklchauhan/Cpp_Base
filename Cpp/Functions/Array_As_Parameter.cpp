/*
* Array only can be passed by addres not by value
* Base address of the array give to pointer
* Giving bracket to the array mean pointer to an array
*
*/

#include<iostream>
using namespace std;

void arr(int arr[],int n){

    arr[0] = 10;

}

int main()
{
    int student_list[] = {20,40,23,25};
    arr(student_list,4);
    cout<<"First student"<<student_list[0]<<endl;
//Type your code here
return 0;
}