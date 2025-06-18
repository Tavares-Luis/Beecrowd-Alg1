#include <stdio.h>
#include "preenchimento_vetor_II.h"

void preenchimento_vetor_II() {
    double N[100];
    int i;
    // Lê o valor inicial para a primeira posição do vetor
    printf("Digite o valor inicial: ");
    scanf("%lf", &N[0]);
    // Preenche o vetor, cada posição recebe metade do valor anterior
    for(i = 1; i < 100; i++) {
        N[i] = N[i-1] / 2.0;
    }
    // Exibe o vetor preenchido, mostrando o índice e o valor com 4 casas decimais
    printf("\nVetor preenchido:\n");
    for(i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
}
