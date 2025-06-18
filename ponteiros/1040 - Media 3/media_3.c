#include <stdio.h>
#include "media_3.h"

void media_3() {
    float n[4], exame, media, media_final;
    float *pn = n;
    scanf("%f %f %f %f", pn, pn+1, pn+2, pn+3);
    media = (pn[0]*2 + pn[1]*3 + pn[2]*4 + pn[3]*1) / 10.0;
    printf("Media: %.1f\n", media);
    if(media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media_final = (media + exame) / 2.0;
        if(media_final >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", media_final);
    }
}

