#include<iostream>
#include"string.h"
#include<bitset>

using namespace std;

// Function to find set bit 
// using right shift operator.
int findPosition(int n) {
    
    // Check if n has exactly one set bit
    if (n == 0 || (n & (n - 1)) != 0) return -1; 
    
    int pos = 1;
    while ((n & 1) == 0) {
        n = n >> 1;
        pos++;
    }
    return pos;
}

int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0; 
    for (int i = 0; i < ar_size; i++)     
        res = res ^ ar[i];
    
    return res;
}

int isPower_of_2(int n){
    if ( (n&(n-1)) !=0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int getmodulo(int n, int x){
    isPower_of_2(x);

    return(n&(x-1));
}

int unsetLSB(int n){
    int position = 0;
    if (n==0){return 0;}
    //finding the rightmost bit of the number
    while(((n>>position)&1)==0){ position++;}

    return position;
}

void check_bit_set(int number,int positon_of_bit){

    if (((1<<positon_of_bit)&number) != 0)
    {
        cout<<"Bit is set"<<endl;
    }
    else
    {
        cout<<"bit is not set"<<endl;
    }
}

void outbound(long long n)
{
    cout<<n<<endl;
}

void print_binary(int n)
{
    int k;
    for (int i = 31; i>=0 ; --i)
    {
        k = printf("%d", (n>>i)&1);
    }
    printf("%d\n",k);
}

int main()
{
    int number = 11;
    getmodulo(13,8);
    return 0;
}