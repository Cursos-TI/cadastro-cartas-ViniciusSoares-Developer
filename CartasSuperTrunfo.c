#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2;
  char codigoCarta[3], codigoCarta2[3];
  char cidade[50], cidade2[50];
  int populacao, populacao2;
  int pontosTuristicos, pontosTuristicos2;
  float area, area2;
  float pib, pib2;

  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Digite a 1° carta\n");
  printf("Estado (A - H): ");
  gets(estado);
  printf("Codigo da carta (ex: A01): ");
  gets(codigoCarta);
  printf("Nome da cidade: ");
  gets(cidade);
  printf("Populacao: ");
  scanf("%i", &populacao);
  printf("Area (km²): ");
  scanf("%f", &area);
  printf("PIB (R$): ");
  scanf("%f", &pib);
  printf("Numero de pontos turisticos: ");
  scanf("%i", &pontosTuristicos);
  
  // Entrada de dados da carta 2
  printf("Digite a 2° carta\n");
  printf("Estado (A - H): ");
  gets(estado2);
  printf("Codigo da carta (ex: A01): ");
  gets(codigoCarta2);
  printf("Nome da cidade: ");
  gets(cidade2);
  printf("Populacao: ");
  scanf("%i", &populacao2);
  printf("Area (km²): ");
  scanf("%f", &area2);
  printf("PIB (R$): ");
  scanf("%f", &pib2);
  printf("Numero de pontos turisticos: ");
  scanf("%i", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  // Exibição da carta 1
  printf("Carta 1: ");
  printf("Estado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigoCarta);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %i\n", populacao);
  printf("Area: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões de reais\n", pib);
  printf("Pontos turisticos: %i\n", pontosTuristicos);

  // Exibição da carta 2
  printf("Carta 2: ");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigoCarta2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %i\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões de reais\n", pib2);
  printf("Pontos turisticos: %i\n", pontosTuristicos2);

return 0;
} 
