#include<stdio.h>

void p1(){
    int var1 = 5;
    int *ptr = &var1;

    printf("%d %d\n", var1, ptr);
    printf("%d %d\n", var1, *ptr++); //--> Address increases
    printf("%d\n", var1);
    printf("%d\n", ptr);
    *(ptr+1);
    printf("%d\n",ptr);

}

int main(){
    p1();

    return 0;
}