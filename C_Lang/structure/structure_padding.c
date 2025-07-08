#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

struct Data {
    char   Data1;     // 1 byte
    int    Data2;     // 4 bytes
    double Data3;     // 8 bytes
    int    Data6;
    char   Data4;     // 1 byte
    float  Data5;     // 4 bytes
};

// Function to print bits of any byte
void print_bits(uint8_t byte) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
}

int main() {
    struct Data obj1 = {
        .Data1 = 126,                  // 0x0A
        .Data2 = 2147483600,          // a large int
        .Data3 = 10.0,                // stored in IEEE 754 format
        .Data4 = 23,                  // 0x17
        .Data5 = 56.7f,
        .Data6 = 3475                // float (32-bit IEEE 754)
    };

    uint8_t *ptr = (uint8_t*)&obj1;
    int totalSize = sizeof(struct Data);

    printf("Total size of struct: %d bytes\n", totalSize);
    printf("\nBitwise layout of each byte:\n");

    for (int i = 0; i < totalSize; i++) {
        printf("Byte %2d (%p): 0x%02X → ", i, (void*)(ptr + i), ptr[i]);
        print_bits(ptr[i]);
        printf("\n");
    }

    return 0;
}
