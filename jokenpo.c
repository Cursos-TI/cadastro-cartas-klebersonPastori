#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhajogador, escolhaComputador;
    srand(time(0));

    printf("__|____|__Jokenpo___|___|__\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhajogador);

    // Verifica se a escolha do jogador é válida
    if (escolhajogador < 1 || escolhajogador > 3) {
        printf("Escolha inválida! Escolha entre 1, 2 ou 3.\n");
        return 1;
    }

    escolhaComputador = (rand() % 3) + 1;

    // Mostra a escolha do jogador
    switch (escolhajogador) {
        case 1:
            printf("Você escolheu Pedra\n");
            break;
        case 2:
            printf("Você escolheu Papel\n");
            break;
        case 3:
            printf("Você escolheu Tesoura\n");
            break;
    }

    // Mostra a escolha do computador
    switch (escolhaComputador) {
        case 1:
            printf("Computador escolheu Pedra\n");
            break;
        case 2:
            printf("Computador escolheu Papel\n");
            break;
        case 3:
            printf("Computador escolheu Tesoura\n");
            break;
    }

    // Verifica o resultado
    if (escolhajogador == escolhaComputador) {
        printf("Empatou!!!!!!\n");
    } else if ((escolhajogador == 1 && escolhaComputador == 3) ||
               (escolhajogador == 2 && escolhaComputador == 1) ||
               (escolhajogador == 3 && escolhaComputador == 2)) {
        printf("Você ganhou o/ \n");
    } else {
        printf("Você perdeu :( \n");
    }

    return 0;
}