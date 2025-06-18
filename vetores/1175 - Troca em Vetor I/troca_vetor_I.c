#include <stdio.h>
#include "troca_vetor_I.h"

void troca_vetor_I() {
    int N[20], i, temp;
    // Lê 20 valores para o vetor N
    printf("Digite 20 valores inteiros (um por linha):\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    // Troca os elementos do início com o final
    for(i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    // Exibe o vetor invertido
    printf("\nVetor invertido:\n");
    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
}
