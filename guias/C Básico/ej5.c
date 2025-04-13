#include <stdio.h>

int main() {
    float f = 0.1;
    double d = 0.1;

    printf("float f(%lu): %f \n", sizeof(f),f);
    printf("double d(%lu): %f \n", sizeof(d),d);

    int f_casted = (int) f;
    int d_casted = (int) d;

    printf("f_casted(%lu): %d \n", sizeof(f_casted),f_casted);
    printf("d_casted(%lu): %d \n", sizeof(d_casted),d_casted);

    return 0;
}