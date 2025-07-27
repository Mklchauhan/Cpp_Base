#include <stdio.h>

int main() {
    int x = 5;

    if (x == 5)
        goto skip;

    printf("This line will be skipped.\n");

skip:
    printf("This line is reached using goto.\n");

    return 0;
}
