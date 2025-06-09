#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int manin(){
    char *str = NULL;

    str = (char*)malloc(15*sizeof(char));
    strcpy(str, "Mukul");
    printf("Name: %s and Address: %p \n",str, str);

    str = (char*) realloc (str, 25*sizeof(char));
    strcat(str,".com");
    printf("");

}
