#include <stdio.h>
#include "preenchimento_vetor_I.h"

void preenchimento_vetor_I() {
    int T, N[1000], i;
    // Solicita ao usuário o valor de T
    printf("Digite o valor de T (2 a 50): ");
    scanf("%d", &T);
    // Preenche o vetor N[1000] repetindo de 0 até T-1
    for(i = 0; i < 1000; i++) {
        N[i] = i % T;
    }
    // Exibe o vetor preenchido
    printf("\nVetor preenchido:\n");
    for(i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
}
