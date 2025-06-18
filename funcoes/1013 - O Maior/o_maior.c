#include <stdio.h>
#include "o_maior.h"

void o_maior() {
    int a, b, c, maior;
    // Solicita ao usuário os três valores
    printf("Digite três valores inteiros separados por espaço: ");
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;
    printf("%d eh o maior\n", maior);
}
