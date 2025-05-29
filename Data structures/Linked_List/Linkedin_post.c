#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_name() {
    char* name = (char*)malloc(10);         // ❌ Allocates only 10 bytes
    strcpy(name, "Christopher");            // ❌ Tries to copy 12 bytes (11 + \0)
    printf("Name: %s\n", name);
    free(name);
}

int main() {
    copy_name();
}
