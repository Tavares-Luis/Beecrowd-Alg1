#include <stdio.h>
#include "preenchimento_vetor_I.h"

void preenchimento_vetor_I() {
    int T, N[1000], i;
    scanf("%d", &T);
    for(i = 0; i < 1000; i++) {
        N[i] = i % T;
    }
    for(i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
}

