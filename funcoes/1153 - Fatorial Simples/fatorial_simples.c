#include <stdio.h>
#include "fatorial_simples.h"

void fatorial_simples() {
    int N, i;
    unsigned long long fat = 1;
    scanf("%d", &N);
    for(i = 2; i <= N; i++) {
        fat *= i;
    }
    printf("%llu\n", fat);
}

