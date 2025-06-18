#include <stdio.h>
#include "1020 - Idade em Dias/idade_em_dias.h"
#include "1040 - Media 3/media_3.h"
#include "1173 - Preenchimento de Vetor II/preenchimento_vetor_ii.h"
#include "1074 - Par ou Impar/par_ou_impar.h"
#include "1021 - Notas e Moedas/notas_e_moedas.h"

void menu_ponteiros() {
    int opcao;
    while (1) {
        printf("===== MENU PONTEIROS =====\n");
        printf("1 - 1020 - Idade em Dias\n");
        printf("2 - 1040 - Media 3\n");
        printf("3 - 1173 - Preenchimento de Vetor II\n");
        printf("4 - 1074 - Par ou Impar\n");
        printf("5 - 1021 - Notas e Moedas\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                idade_em_dias();
                break;
            case 2:
                media_3();
                break;
            case 3:
                preenchimento_vetor_ii();
                break;
            case 4:
                par_ou_impar();
                break;
            case 5:
                notas_e_moedas();
                break;
            case 0:
                return;
            default:
                printf("Opcao invalida!\n");
        }
    }
}
