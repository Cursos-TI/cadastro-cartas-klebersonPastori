#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    srand(time(0));
    numeroComputador = (rand() % 100 + 1);
    printf("Bem vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número que estou pensando entre 1 e 100.\n");
    printf("Digite o seu palpite: ");
    scanf("%d", &numeroJogador);    
    if (numeroJogador < 1 || numeroJogador > 100) {
        printf("Número inválido! Por favor, escolha um número entre 1 e 100.\n");
        return 1;
    }
    if (numeroJogador == numeroComputador) {
        printf("Parabéns! Você adivinhou o número %d corretamente!\n", numeroComputador);
    } else if (numeroJogador < numeroComputador) {
        printf("O número que pensei é maior que %d. Tente novamente!\n", numeroJogador);
    } else {
        printf("O número que pensei é menor que %d. Tente novamente!\n", numeroJogador);
    }
    
    return 0;
}


