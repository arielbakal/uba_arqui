#include <stdio.h>

#define N 5

int recursive_factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int res = n * recursive_factorial(n-1);
    return res;
}

int iterative_factorial(int n) {
    int memo[N];

    for (int i=0; i<N; i++) {
        if (i==0) {
            memo[i] = N;
            continue;
        }
        memo[i] = memo[i-1] * i;
    }
    return memo[N-1];
}

int main() {

    int res = recursive_factorial(N);
    int res2 = iterative_factorial(N);

    printf("%d\n", res);
    printf("%d\n", res2);

    return 0;
}