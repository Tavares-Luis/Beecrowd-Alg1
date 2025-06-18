#include <stdio.h>
#include "coluna_matriz.h"

void coluna_matriz() {
    int C, i, j;
    char T;
    double M[12][12], soma = 0.0;
    scanf("%d\n%c", &C, &T);
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    for(i = 0; i < 12; i++)
        soma += M[i][C];
    if(T == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma/12.0);
}

