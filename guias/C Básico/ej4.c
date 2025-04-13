#include <stdint.h>
#include <stdio.h>

int main() { 
    int8_t a = -2;
    uint8_t ua = 2;
    

    printf("int8_t(%lu): %d \n", sizeof(a),a);
    printf("uint8_t(%lu): %d \n", sizeof(ua),ua);

    return 0;
}