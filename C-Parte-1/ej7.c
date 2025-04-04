#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2, d = 1;
    printf("%d \n", a + b * c / d);
    printf("%d \n", a % b);
    printf("%x %x \n", a == b, a != b);   
    printf("%x %x \n", a & b, a | b );
    printf("%d \n", ~a);
    printf("%d \n", a << 1);
    printf("%d \n", a >> 1);
    printf("%d \n", a += b);
    printf("%d \n", a -= b);

    return 0;
}