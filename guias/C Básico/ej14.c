#include <stdio.h>

int k;

void function() {
    int k = 3;
    printf("%d\n", k);
}

int main() {
    function();
    printf("%d\n", k);

    return 0;
}