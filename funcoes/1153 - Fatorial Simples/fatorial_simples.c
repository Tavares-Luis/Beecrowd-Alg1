#include <stdio.h>
#include "fatorial_simples.h"

void fatorial_simples() {
    int N, i;
    unsigned long long fat = 1;
    // Solicita ao usuário o valor para calcular o fatorial
    printf("Digite um valor inteiro para calcular o fatorial: ");
    scanf("%d", &N);
    for(i = 2; i <= N; i++) {
        fat *= i;
    }
    printf("%llu\n", fat);
}
