#include <stdio.h>
#include "1174 - Seleçao em Vetor I/selecao_vetor_I.h"
#include "1175 - Troca em Vetor I/troca_vetor_I.h"
#include "1176 - Fibonacci em Vetor/fibonacci_vetor.h"
#include "1177 - Preenchimento de Vetor I/preenchimento_vetor_I.h"
#include "1178 - Preenchimento de Vetor II/preenchimento_vetor_II.h"

void menu_vetores() {
    int opcao;
    while (1) {
        printf("===== MENU VETORES =====\n");
        printf("1 - 1174 - Selecao em Vetor I\n");
        printf("2 - 1175 - Troca em Vetor I\n");
        printf("3 - 1176 - Fibonacci em Vetor\n");
        printf("4 - 1177 - Preenchimento de Vetor I\n");
        printf("5 - 1178 - Preenchimento de Vetor II\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                selecao_vetor_I();
                break;
            case 2:
                troca_vetor_I();
                break;
            case 3:
                fibonacci_vetor();
                break;
            case 4:
                preenchimento_vetor_I();
                break;
            case 5:
                preenchimento_vetor_II();
                break;
            case 0:
                return;
            default:
                printf("Opcao invalida!\n");
        }
    }
}
