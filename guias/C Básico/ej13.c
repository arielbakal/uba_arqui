#include <stdio.h>
#include <stdlib.h>

#define N 60000000

int main() {

    int matches[6] = {0};

    for (int n=0; n != N; ++n) {
        int x = 7;
        while(x > 6) 
            x = 1 + rand()/((RAND_MAX + 1u)/6); 
        matches[x-1]++;
    }

    for (int i=0; i<6; i++) {
        float percentage = 100.0 * matches[i] / N;
        printf("Dado %d tirado: %d veces (%f%%)\n", i+1, matches[i], percentage);
    }

    return 0;
}
