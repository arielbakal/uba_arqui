#include <stdio.h>

void upper_case(char *str) {
    while (*str != '\0') {
        if (*str <= 'z' & *str >= 'a') {
            *str += ('A' - 'a');
        }
        str++;
    }
}

int main() {
    char str1[] = "tralalero tralala";
    upper_case(str1);
    printf("%s\n", str1);
    return 0;
}