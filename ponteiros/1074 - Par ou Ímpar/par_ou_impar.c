#include <stdio.h>
#include "par_ou_impar.h"

void par_ou_impar() {
    int N, i, x;
    int *px = &x;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
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

