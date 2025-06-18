#include <stdio.h>
#include "1165 - Número Primo/numero_primo.h"
#include "1151 - Fibonacci Fácil/fibonacci_facil.h"
#include "1153 - Fatorial Simples/fatorial_simples.h"
#include "1047 - Tempo de Jogo com Minutos/tempo_jogo_minutos.h"
#include "1013 - O Maior/o_maior.h"

void menu_funcoes() {
    int opcao;
    while (1) {
        printf("===== MENU FUNCOES =====\n");
        printf("1 - 1165 - Número Primo\n");
        printf("2 - 1151 - Fibonacci Facil\n");
        printf("3 - 1153 - Fatorial Simples\n");
        printf("4 - 1047 - Tempo de Jogo com Minutos\n");
        printf("5 - 1013 - O Maior\n");
        // Adicione aqui as próximas opções conforme modularizar os outros exercícios
        printf("0 - Voltar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                numero_primo();
                break;
            case 2:
                fibonacci_facil();
                break;
            case 3:
                fatorial_simples();
                break;
            case 4:
                tempo_jogo_minutos();
                break;
            case 5:
                o_maior();
                break;
            case 0:
                return;
            default:
                printf("Opcao invalida!\n");
        }
    }
}
