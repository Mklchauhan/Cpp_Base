#include<iostream>
using namespace std;

int *fun(int n){
    int *ptr = new int[n*sizeof(int)];
    for (int i = 0; i < n*sizeof(int); i++)
    {
        ptr[i] = i+1;
    }
    
    return (ptr);
}
int main()
{
    int *A;

    A=fun(5);

//Type your code here
return 0;
}