#include <stdio.h>
#include "preenchimento_vetor_ii.h"

void preenchimento_vetor_ii() {
    int N[10];
    int i;
    int *p = N;
    // Solicita ao usuário o valor inicial
    printf("Digite o valor inicial: ");
    scanf("%d", p);
    for(i = 1; i < 10; i++) {
        *(p + i) = 2 * (*(p + i - 1));
    }
    // Exibe o vetor preenchido
    printf("Vetor preenchido:\n");
    for(i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, *(p + i));
    }
}
