#include<stdio.h>
#include<stdint.h>

uint16_t swap_endianess_16bit(uint16_t value){
    return (value << 8) | (value >> 8);
}

uint32_t swap_endianess_32bit(uint32_t value){
    return ((value >> 24)& 0x00000000FF) | 
            ((value >> 8 )& 0x0000FF00) | 
            ((value<< 8)& 0x00FF0000) |
            ((value<< 24) & 0xFF000000);
}

int main(){
    uint16_t val1 = (uint16_t) 0x1234;
    uint32_t value = (uint32_t) 0x12345678;
    uint32_t *ptr = (uint32_t*)&value;
    
    if (*ptr==78)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }

    printf("swapping the 16 bit: %04x\n", swap_endianess_16bit(val1));
    printf("swapping the 32 bit: %08x\n", swap_endianess_32bit(value));


    return 0;

    
}
