#include <stdio.h>
#include "menor_posicao.h"

void menor_posicao() {
    int N, i, menor, pos, x;
    scanf("%d", &N);
    scanf("%d", &menor);
    pos = 0;
    for(i = 1; i < N; i++) {
        scanf("%d", &x);
        if(x < menor) {
            menor = x;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
}

