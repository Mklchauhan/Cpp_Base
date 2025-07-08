#include<stdio.h>
#include "extern.h"

extern int var = 100;
void Example();

static int var1 = 90; //--> This will go in the .data segment
static int var2; //--> This will go in the .bss segment but why? 

int main(){
    printf("The Intialized variable 1: %d",var1);
    printf("The uninitialized variable 2: %d", var2);
    Example();
    printf("I am from Extern file variable: %d",Exvar);

    return 0;
}

//clang -o static_section static_section.c

//nm -S static_section
