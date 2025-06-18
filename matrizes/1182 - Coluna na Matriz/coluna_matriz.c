#include <stdio.h>
#include "coluna_matriz.h"

void coluna_matriz() {
    int C, i, j;
    char T;
    double M[12][12], soma = 0.0;
    // Solicita ao usuário a coluna e a operação
    printf("Digite o número da coluna (0 a 11): ");
    scanf("%d", &C);
    printf("Digite a operação (S para soma, M para média): ");
    scanf(" %c", &T);
    // Lê a matriz
    printf("Digite os 144 valores da matriz (linha por linha):\n");
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    // Calcula a soma da coluna escolhida
    for(i = 0; i < 12; i++)
        soma += M[i][C];
    // Exibe o resultado conforme a operação
    if(T == 'S')
        printf("Soma da coluna %d: %.1lf\n", C, soma);
    else
        printf("Média da coluna %d: %.1lf\n", C, soma/12.0);
}
