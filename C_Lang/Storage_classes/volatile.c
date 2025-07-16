#include <stdio.h>

int non_volatile_read() {
    int x = 0;
    int value = 123;
    for (int i = 0; i < 1000000; i++) {
        x = value;
    }
    return x;
}

int volatile_read() {
    int x = 0;
    volatile int value = 123;
    for (int i = 0; i < 1000000; i++) {
        x = value;
    }
    return x;
}

int main() {
    int a = non_volatile_read();
    int b = volatile_read();
    printf("Non-volatile result: %d\n", a);
    printf("Volatile result: %d\n", b);
    return 0;
}

//use command clang -O2 -S -o output.s volatile.c
// cat output.s 