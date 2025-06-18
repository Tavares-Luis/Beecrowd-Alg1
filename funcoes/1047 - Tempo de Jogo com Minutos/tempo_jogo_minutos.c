#include <stdio.h>
#include "tempo_jogo_minutos.h"

void tempo_jogo_minutos() {
    int h1, m1, h2, m2;
    int ini, fim, dur, horas, minutos;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    ini = h1 * 60 + m1;
    fim = h2 * 60 + m2;
    if (fim <= ini) fim += 24 * 60;
    dur = fim - ini;
    horas = dur / 60;
    minutos = dur % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
}

