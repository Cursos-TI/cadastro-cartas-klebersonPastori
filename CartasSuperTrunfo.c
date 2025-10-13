#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado[50];
char nomeDaCarta[50];
char nomeDaCidade[50];
int populacao;
float area;
float pib;
int pontosTuristicos;
    
  // Área para entrada de dados
printf("Qual estado?\n");
  scanf(" %[^\n]", estado);  // Lê string com espaços

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
  
    // Área para exibição dos dados da cidade
printf("\nCarta A\n");
printf("- Estado: %s\n", estado);
printf("- Código da carta: %s\n", nomeDaCarta);
printf("- Cidade: %s\n", nomeDaCidade);
printf("- População: %d\n", populacao);
printf("- Área: %.2f km²\n", area);
printf("- PIB: %.2f bilhões\n", pib);
printf("- Pontos turísticos: %d\n", pontosTuristicos);

return 0;
} 
