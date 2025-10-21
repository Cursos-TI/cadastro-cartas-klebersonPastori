#include <stdio.h>

int main() {
    // Carta 1
    char estado[50], nomeDaCarta[50], nomeDaCidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    printf("Cadastro da Carta A\n");
    printf("Qual estado?\n");
    scanf(" %[^\n]", estado);

    printf("Qual codigo da carta?\n");
    scanf(" %[^\n]", nomeDaCarta);

    printf("Qual a cidade?\n");
    scanf(" %[^\n]", nomeDaCidade);

    printf("Qual a população?\n");
    scanf("%d", &populacao);

    printf("Qual a área?\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos?\n");
    scanf("%d", &pontosTuristicos);

    float densidade = populacao / area;
    float pibPerCapita = pib / populacao;

    // Carta 2
    char estado1[50], nomeDaCarta1[50], nomeDaCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    printf("\nCadastro da Carta B\n");
    printf("Qual estado?\n");
    scanf(" %[^\n]", estado1);

    printf("Qual codigo da carta?\n");
    scanf(" %[^\n]", nomeDaCarta1);

    printf("Qual a cidade?\n");
    scanf(" %[^\n]", nomeDaCidade1);

    printf("Qual a população?\n");
    scanf("%d", &populacao1);

    printf("Qual a área?\n");
    scanf("%f", &area1);

    printf("Qual o PIB?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos?\n");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Menu interativo
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Carta A) x %s (Carta B)\n", nomeDaCidade, nomeDaCidade1);

    switch(opcao) {
        case 1: // População
            printf("População: %d x %d\n", populacao, populacao1);
            if (populacao > populacao1) {
                printf("Carta A venceu!\n");
            } else if (populacao < populacao1) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área: %.2f km² x %.2f km²\n", area, area1);
            if (area > area1) {
                printf("Carta A venceu!\n");
            } else if (area < area1) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %.2f x %.2f\n", pib, pib1);
            if (pib > pib1) {
                printf("Carta A venceu!\n");
            } else if (pib < pib1) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos: %d x %d\n", pontosTuristicos, pontosTuristicos1);
            if (pontosTuristicos > pontosTuristicos1) {
                printf("Carta A venceu!\n");
            } else if (pontosTuristicos < pontosTuristicos1) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Densidade: %.2f x %.2f\n", densidade, densidade1);
            if (densidade < densidade1) {
                printf("Carta A venceu! (menor densidade)\n");
            } else if (densidade > densidade1) {
                printf("Carta B venceu! (menor densidade)\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            break;
    }

    return 0;
}