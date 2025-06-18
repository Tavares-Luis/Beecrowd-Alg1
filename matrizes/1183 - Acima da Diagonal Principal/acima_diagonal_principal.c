#include <stdio.h>
#include "acima_diagonal_principal.h"

void acima_diagonal_principal() {
    char O;
    double M[12][12], soma = 0.0;
    int i, j, count = 0;
    // Solicita ao usuário a operação
    printf("Digite a operação (S para soma, M para média): ");
    scanf(" %c", &O);
    // Lê a matriz
    printf("Digite os 144 valores da matriz (linha por linha):\n");
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    // Calcula a soma dos elementos acima da diagonal principal
    for(i = 0; i < 12; i++) {
        for(j = i + 1; j < 12; j++) {
            soma += M[i][j];
            count++;
        }
    }
    // Exibe o resultado conforme a operação
    if(O == 'S')
        printf("Soma dos elementos acima da diagonal principal: %.1lf\n", soma);
    else
        printf("Média dos elementos acima da diagonal principal: %.1lf\n", soma / count);
}
