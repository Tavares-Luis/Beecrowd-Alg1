r#include <stdio.h>
#include <math.h>
#include "notas_e_moedas.h"

void notas_e_moedas() {
    double valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int qtd, i;
    int *pnotas = notas, *pmoedas = moedas;
    scanf("%lf", &valor);
    int centavos = (int)round(valor * 100);
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++) {
        qtd = centavos / (pnotas[i] * 100);
        printf("%d nota(s) de R$ %.2f\n", qtd, (float)pnotas[i]);
        centavos -= qtd * pnotas[i] * 100;
    }
    printf("MOEDAS:\n");
    qtd = centavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", qtd);
    centavos -= qtd * 100;
    for(i = 1; i < 6; i++) {
        qtd = centavos / pmoedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, (float)pmoedas[i]/100);
        centavos -= qtd * pmoedas[i];
    }
}

