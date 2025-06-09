#include<stdio.h>

struct Example
{
    char a;
    int b;
    char c;
};

int main(){
    struct Example object_1 = {'A', 42, 'B'};
    printf("size: %zu\n", sizeof(Example));
    return 0;
}
