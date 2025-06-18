#include <stdio.h>
#include "fibonacci_facil.h"

void fibonacci_facil() {
    int N, i;
    int fib[46];
    // Solicita ao usuário a quantidade de termos
    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &N);
    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i < N; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(i = 0; i < N; i++) {
        if(i == N-1)
            printf("%d\n", fib[i]);
        else
            printf("%d ", fib[i]);
    }
}
