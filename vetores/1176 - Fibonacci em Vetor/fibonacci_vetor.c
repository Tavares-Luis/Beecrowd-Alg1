#include <stdio.h>
#include <stdint.h>
#include "fibonacci_vetor.h"

void fibonacci_vetor() {
    int T, i, N;
    uint64_t fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }
}

