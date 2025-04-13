# include <stdio.h>

int main() {
    # define N 4

    int l[N] = {1, 2, 3, 4};

    for (int i = 0; i < N; i++) {
        printf("%d ", l[i]);
    }

    printf("\n");

    int first = l[0];
    for (int i = 0; i < N-1; i++) {
        l[i] = l[i+1];
    }
    l[N-1] = first;

    for (int i = 0; i < N; i++) {
        printf("%d ", l[i]);
    }

    printf("\n");

    return 0;
}