#include <stdio.h>
#include "par_ou_impar.h"

void par_ou_impar() {
    int N, i, x;
    int *px = &x;
    // Solicita ao usuário a quantidade de casos
    printf("Digite a quantidade de casos: ");
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", px);
        if(*px == 0) {
            printf("NULL\n");
        } else {
            if(*px % 2 == 0)
                printf("EVEN ");
            else
                printf("ODD ");
            if(*px > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }
}
