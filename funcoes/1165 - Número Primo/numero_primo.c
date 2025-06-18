#include <stdio.h>
#include "numero_primo.h"

void numero_primo() {
    int N, i, j, x, primo;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &x);
        primo = 1;
        if(x < 2) primo = 0;
        for(j = 2; j * j <= x && primo; j++) {
            if(x % j == 0) primo = 0;
        }
        if(primo)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }
}

