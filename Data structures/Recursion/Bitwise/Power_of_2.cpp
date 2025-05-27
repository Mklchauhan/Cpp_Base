/*
* The power of 2 is a number that is expressed as 2^k where k is an integer.
* The power of 2 numbers has only one bit set in their binary representation.
* For example, 4(100), 8(1000), 16(10000), etc.
*/

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==0)
        return false;
    return ((n&(n-1))==0);
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if (isPowerOfTwo(n))
    {
        cout<<"The number is a power of 2"<<endl;
    }
    else
    {
        cout<<"The number is not a power of 2"<<endl;
    }
return 0;
}