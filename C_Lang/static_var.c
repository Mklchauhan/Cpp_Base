#include<stdio.h>

void fun(void){
    static short count = 0; // local varibale
    //count = count + 1;
    count += 1;
    printf("%d\n", count);
    //Here, static get deleted after the program ends
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}