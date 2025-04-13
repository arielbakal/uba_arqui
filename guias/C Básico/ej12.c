#include <stdio.h>

#define N 4
#define r 2

int main() {
    int l[N] = {1, 2, 3, 4};
    int rotated[r];

    //for (int i = 0; i < r; i++) {
    //    temp[i] = l[i];
    //}

    //for (int i = 0; i < N - r; i++) {
    //    l[i] = l[i + r];
    //}

    //for (int i = 0; i < r; i++) {
    //    l[N - r + i] = temp[i];
    //}

    for (int i = 0; i < N; i++) {
        rotated[(i + (N - r)) % N] = l[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
