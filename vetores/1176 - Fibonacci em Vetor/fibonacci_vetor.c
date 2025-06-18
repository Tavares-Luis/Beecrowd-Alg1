#include <stdio.h>
#include <stdint.h>
#include "fibonacci_vetor.h"

void fibonacci_vetor() {
    int T, i, N;
    uint64_t fib[61];
    // Inicializa os dois primeiros termos da sequência de Fibonacci
    fib[0] = 0;
    fib[1] = 1;
    // Calcula os próximos termos até o 60º
    for(i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    // Lê o número de casos de teste
    printf("Digite o número de casos de teste: ");
    scanf("%d", &T);
    // Para cada caso, lê o termo desejado e imprime o valor correspondente
    while(T--) {
        printf("Digite o termo desejado (0 a 60): ");
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }
}
