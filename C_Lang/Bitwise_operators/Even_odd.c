/*
* In this question we are checking the number is even or odd using bitwise operator.
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n&1)
        printf("odd\n");
    else
        printf("even\n");
        
        return 0;
}