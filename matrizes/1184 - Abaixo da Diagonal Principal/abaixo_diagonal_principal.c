p#include <stdio.h>
#include "abaixo_diagonal_principal.h"

void abaixo_diagonal_principal() {
    char O;
    double M[12][12], soma = 0.0;
    int i, j, count = 0;
    scanf(" %c", &O);
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    for(i = 1; i < 12; i++) {
        for(j = 0; j < i; j++) {
            soma += M[i][j];
            count++;
        }
    }
    if(O == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / count);
}

