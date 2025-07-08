#include<stdio.h>

int mysizeof(int a){
    size_t b = (char*)(&a+1) - (char*)&a ; 
    return b;
}

int main(){
    int a;
    printf("size of the a:%d\n",mysizeof(a));
    return 0;
}