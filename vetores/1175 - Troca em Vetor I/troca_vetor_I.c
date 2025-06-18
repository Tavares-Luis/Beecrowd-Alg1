#include <stdio.h>
#include "troca_vetor_I.h"

void troca_vetor_I() {
    int N[20], i, temp;
    for(i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    for(i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
}
