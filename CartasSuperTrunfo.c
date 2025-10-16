#include <stdio.h>

int main() {
  // Carta 1
  char estado[50], nomeDaCarta[50], nomeDaCidade[50];
  int populacao, pontosTuristicos;
  float area, pib;

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
  float superPoderA = (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1.0 / densidade);

  printf("\nCarta A\n");
  printf("- Estado: %s\n", estado);
  printf("- Código da carta: %s\n", nomeDaCarta);
  printf("- Cidade: %s\n", nomeDaCidade);
  printf("- População: %d\n", populacao);
  printf("- Área: %.2f km²\n", area);
  printf("- PIB: %.2f bilhões\n", pib);
  printf("- Pontos turísticos: %d\n", pontosTuristicos);
  printf("- Densidade populacional: %.1f\n", densidade);
  printf("- PIB per capita: %.1f\n", pibPerCapita);
  printf("- Super Poder: %.2f\n", superPoderA);

  // Carta 2
  char estado1[50], nomeDaCarta1[50], nomeDaCidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  printf("\nQual estado?\n");
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
  float superPoderB = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

  printf("\nCarta B\n");
  printf("- Estado: %s\n", estado1);
  printf("- Código da carta: %s\n", nomeDaCarta1);
  printf("- Cidade: %s\n", nomeDaCidade1);
  printf("- População: %d\n", populacao1);
  printf("- Área: %.2f km²\n", area1);
  printf("- PIB: %.2f bilhões\n", pib1);
  printf("- Pontos turísticos: %d\n", pontosTuristicos1);
  printf("- Densidade populacional: %.1f\n", densidade1);
  printf("- PIB per capita: %.1f\n", pibPerCapita1);
  printf("- Super Poder: %.2f\n", superPoderB);

  // Comparações
  printf("\nComparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", populacao > populacao1 ? 1 : 2, populacao > populacao1 ? 1 : 0);
  printf("Área: Carta %d venceu (%d)\n", area > area1 ? 1 : 2, area > area1 ? 1 : 0);
  printf("PIB: Carta %d venceu (%d)\n", pib > pib1 ? 1 : 2, pib > pib1 ? 1 : 0);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos > pontosTuristicos1 ? 1 : 2, pontosTuristicos > pontosTuristicos1 ? 1 : 0);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade < densidade1 ? 1 : 2, densidade < densidade1 ? 1 : 0);
  printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita > pibPerCapita1 ? 1 : 2, pibPerCapita > pibPerCapita1 ? 1 : 0);
  printf("Super Poder: Carta %d venceu (%d)\n", superPoderA > superPoderB ? 1 : 2, superPoderA > superPoderB ? 1 : 0);

  return 0;
}