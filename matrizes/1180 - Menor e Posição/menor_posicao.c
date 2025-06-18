#include <stdio.h>
#include "menor_posicao.h"

void menor_posicao() {
    int N, i, menor, pos, x;
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor (2 a 999): ");
    scanf("%d", &N);
    // Lê o primeiro valor e inicializa o menor
    printf("Digite o valor 0: ");
    scanf("%d", &menor);
    pos = 0;
    // Lê os demais valores e encontra o menor e sua posição
    for(i = 1; i < N; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &x);
        if(x < menor) {
            menor = x;
            pos = i;
        }
    }
    // Exibe o menor valor e sua posição
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
}
