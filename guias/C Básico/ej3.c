#include <stdio.h>
int main() {
    char c = 100;
    unsigned char uc = 200;
    short s = -8712;
    unsigned short us = 65000;
    int i = 123456;
    unsigned u = 4000000;
    long l = 1234567890;
    unsigned long ul = 1000000000000000;
    long long ll = 21312941412421142;
    
    printf("char(%lu): %d \n", sizeof(c),c);
    printf("unsigned char(%lu): %d \n", sizeof(uc),uc);
    printf("short(%lu): %d \n", sizeof(s),s);
    printf("unsigned short(%lu): %d \n", sizeof(us),us);
    printf("int(%lu): %d \n", sizeof(i),i);
    printf("unsigned(%lu): %d \n", sizeof(u),u);
    printf("long(%lu): %ld \n", sizeof(l),l);
    printf("unsigned long(%lu): %ld \n", sizeof(ul),ul);
    printf("long long(%lu): %lld \n", sizeof(ll),ll);

    return 0;
}