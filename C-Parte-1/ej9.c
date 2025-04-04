#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a = 0xFFFFFFFF, b = 0xFFFFFFFF;
    uint32_t mask_high = 0xE0000000;
    uint32_t mask_low = 0x7;

    uint32_t a_masked = a & mask_high;
    uint32_t b_masked = b & mask_low;
    
    uint32_t a_shifted = a_masked >> 29;

    int result = a_shifted == b_masked;

    printf("%d \n", result);

    return 0;
}