#include <stdio.h>
#include "idade_em_dias.h"

void idade_em_dias() {
    int total, anos, meses, dias;
    int *ptotal = &total, *panos = &anos, *pmeses = &meses, *pdias = &dias;
    // Solicita ao usuário a quantidade de dias
    printf("Digite a idade em dias: ");
    scanf("%d", ptotal);
    *panos = *ptotal / 365;
    *pmeses = (*ptotal % 365) / 30;
    *pdias = (*ptotal % 365) % 30;
    // Exibe o resultado
    printf("%d ano(s)\n", *panos);
    printf("%d mes(es)\n", *pmeses);
    printf("%d dia(s)\n", *pdias);
}
