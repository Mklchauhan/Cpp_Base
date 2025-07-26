#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("Base array values:\n");
    printf("arr[0]=%d, arr[1]=%d, arr[2]=%d\n", arr[0], arr[1], arr[2]);

    printf("\n--- Pointer Arithmetic ---\n");

    printf("*ptr + 1       = %d\n", *ptr + 1);      // 10 + 1 = 11
    printf("*(ptr + 1)     = %d\n", *(ptr + 1));    // arr[1] = 20
    printf("*ptr++         = %d\n", *ptr++);        // prints 10, ptr -> arr[1]
    ptr = arr; // reset

    printf("(*ptr)++       = %d\n", (*ptr)++);      // prints 10, then arr[0]=11
    ptr = arr; // reset

    printf("++*ptr         = %d\n", ++*ptr);        // arr[0]=12, prints 12
    ptr = arr; // reset

    printf("*++ptr         = %d\n", *++ptr);        // ptr -> arr[1], prints 20

    printf("\n--- Typecasting: int* to char* ---\n");

    ptr = arr; // reset
    char *cptr = (char*)ptr;

    printf("int* ptr       = %p\n", (void*)ptr);
    printf("char* cptr     = %p\n", (void*)cptr);

    printf("*((char*)ptr)  = %d\n", *((char*)ptr));     // First byte of arr[0]
    printf("*((char*)ptr+1)= %d\n", *((char*)ptr + 1)); // Second byte of arr[0]

    printf("((int*)cptr+1) = %d\n", *((int*)cptr + 1)); // arr[1] = 20

    printf("\n--- Typecasting void* ---\n");

    void *vptr = (void*)ptr;
    printf("void* vptr     = %p\n", vptr);

    // Need to cast before dereferencing
    printf("*(int*)vptr    = %d\n", *(int*)vptr); // arr[0] = 12

    printf("\n--- Misaligned Cast Warning ---\n");
    printf("*((short*)ptr + 1) = %d (platform-dependent)\n", *((short*)ptr + 1)); // half of int

    printf("\n--- Final State of Array ---\n");
    printf("arr[0]=%d, arr[1]=%d, arr[2]=%d\n", arr[0], arr[1], arr[2]);

    return 0;
}
