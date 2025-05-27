/*
* Pointers Basic Referencig and Dereferencing
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){

    int x=1, y=2, z[10], q;
    float m;

    int *ptr; //ptr is a integer pointer
    ptr = &x; //ptr points to x --> x holds the value 1 and here ptr address of the x.
    y = *ptr; // Now, y is 1 because it is dereferenced to the ptr points to x and hold value x

    // ptr points to integer x and get derenced by *. *ptr can occur in any context where x could

    *ptr += 10;
    printf("\nValue of X:%d will increase by 10: Now, %d\n", y, *ptr);

    y = *ptr + 1;
    printf("\nValue of X:%d will increase by 10: Now, %d\n", y, *ptr);

    ++y;
    printf("\n");
    y; //Baisc_of_pointers.c:27:5: warning: expression result unused [-Wunused-value] if we don't use
    y++;




    // printf("\nValue of X: %d\n",x);
    // printf("\nValue of which pointer holds %p\n", ptr);
    // printf("\nValue of X which dereferenced by the *: %d\n",*ptr);


}