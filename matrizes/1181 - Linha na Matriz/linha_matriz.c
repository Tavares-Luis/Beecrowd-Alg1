#include <stdio.h>
#include "linha_matriz.h"

void linha_matriz() {
    int L, i, j;
    char T;
    double M[12][12], soma = 0.0;
    // Solicita ao usuário a linha e a operação
    printf("Digite o número da linha (0 a 11): ");
    scanf("%d", &L);
    printf("Digite a operação (S para soma, M para média): ");
    scanf(" %c", &T);
    // Lê a matriz
    printf("Digite os 144 valores da matriz (linha por linha):\n");
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    // Calcula a soma da linha escolhida
    for(j = 0; j < 12; j++)
        soma += M[L][j];
    // Exibe o resultado conforme a operação
    if(T == 'S')
        printf("Soma da linha %d: %.1lf\n", L, soma);
    else
        printf("Média da linha %d: %.1lf\n", L, soma/12.0);
}
