#include <stdio.h>
#include "1180 - Menor e Posição/menor_posicao.h"
#include "1181 - Linha na Matriz/linha_matriz.h"
#include "1182 - Coluna na Matriz/coluna_matriz.h"
#include "1183 - Acima da Diagonal Principal/acima_diagonal_principal.h"
#include "1184 - Abaixo da Diagonal Principal/abaixo_diagonal_principal.h"

void menu_matrizes() {
    int opcao;
    while (1) {
        printf("===== MENU MATRIZES =====\n");
        printf("1 - 1180 - Menor e Posição\n");
        printf("2 - 1181 - Linha na Matriz\n");
        printf("3 - 1182 - Coluna na Matriz\n");
        printf("4 - 1183 - Acima da Diagonal Principal\n");
        printf("5 - 1184 - Abaixo da Diagonal Principal\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                menor_posicao();
                break;
            case 2:
                linha_matriz();
                break;
            case 3:
                coluna_matriz();
                break;
            case 4:
                acima_diagonal_principal();
                break;
            case 5:
                abaixo_diagonal_principal();
                break;
            case 0:
                return;
            default:
                printf("Opcao invalida!\n");
        }
    }
}
