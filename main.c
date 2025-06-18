#include <stdio.h>
#include <stdlib.h>
#include "vetores/menu_vetores.h"
#include "matrizes/menu_matrizes.h"
#include "funcoes/menu_funcoes.h"
#include "ponteiros/menu_ponteiros.h"

int main() {
    int opcao;
    while (1) {
        printf("===== MENU PRINCIPAL =====\n");
        printf("1 - Vetores\n");
        printf("2 - Matrizes\n");
        printf("3 - Funcoes\n");
        printf("4 - Ponteiros\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                menu_vetores();
                break;
            case 2:
                menu_matrizes();
                break;
            case 3:
                menu_funcoes();
                break;
            case 4:
                menu_ponteiros();
                break;
            case 0:
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opcao invalida!\n");
        }
    }
    return 0;
}
