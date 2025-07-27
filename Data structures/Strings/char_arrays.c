#include<stdio.h>
#include<string.h>
void print( char *c){
    c[0] = 'A';
    while (*c != '\0')
    {
        printf("%c",*c);
        c++;
    }
    printf("\n");
}
int main(){
    char C[] = "Hello"; //stored in stack safe to modify
    char *D = "Hello"; //Stored in read-only segment → NOT safe to modify
    print(C);
    print(D);
    return 0;
}