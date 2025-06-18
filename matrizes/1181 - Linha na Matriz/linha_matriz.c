#include <stdio.h>
#include "linha_matriz.h"

void linha_matriz() {
    int L, i, j;
    char T;
    double M[12][12], soma = 0.0;
    scanf("%d\n%c", &L, &T);
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    for(j = 0; j < 12; j++)
        soma += M[L][j];
    if(T == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma/12.0);
}
