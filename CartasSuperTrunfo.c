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
  float area, densidadePopulacional, area2, densidadePopulacional2;
  float pib, pibCapita, pib2, pibCapita2, superPoder, superPoder2;

  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Digite a 1° carta\n");
  printf("Estado (A - H): ");
  scanf("%s", &estado);
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", &codigoCarta);
  printf("Nome da cidade: ");
  scanf("%s", cidade);
  printf("Populacao: ");
  scanf("%i", &populacao);
  printf("Area (km²): ");
  scanf("%f", &area);
  printf("PIB (R$): ");
  scanf("%f", &pib);
  printf("Numero de pontos turisticos: ");
  scanf("%i", &pontosTuristicos);
  pibCapita = pib / populacao;
  densidadePopulacional = populacao / area;
  superPoder = (float) populacao + area + pib + pontosTuristicos + pibCapita + densidadePopulacional;

  // Entrada de dados da carta 2
  printf("Digite a 2° carta\n");
  printf("Estado (A - H): ");
  scanf("%s", &estado2);
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", &codigoCarta2);
  printf("Nome da cidade: ");
  scanf("%s", &cidade2);
  printf("Populacao: ");
  scanf("%i", &populacao2);
  printf("Area (km²): ");
  scanf("%f", &area2);
  printf("PIB (R$): ");
  scanf("%f", &pib2);
  printf("Numero de pontos turisticos: ");
  scanf("%i", &pontosTuristicos2);
  pibCapita2 = pib2 / populacao2;
  densidadePopulacional2 = populacao2 / area2;
  superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibCapita2 + densidadePopulacional2;

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
  printf("Densidade Populacional: %.2f hab/km²\n", populacao / area);
  printf("PIB per Capita: %.2f reais\n\n", pib / populacao);

  // Exibição da carta 2
  printf("Carta 2: ");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigoCarta2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %i\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões de reais\n", pib2);
  printf("Pontos turisticos: %i\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²", populacao2 / area2);
  printf("PIB per Capita: %.2f reais\n\n", pib2 / populacao2);

  printf("Comparação das cartas:\n");
  // printf("População: %s\n", populacao > populacao2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  // printf("Area: %s\n", area > area2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  // printf("Pib: %s\n", pib > pib2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  // printf("Pontos Turisticos: %s\n", pontosTuristicos > pontosTuristicos2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  // printf("Densidade Populacional: %s\n", densidadePopulacional < densidadePopulacional2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  // printf("Pib per Capita: %s\n", pibCapita > pibCapita2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  // printf("Super Poder: %s\n", superPoder > superPoder2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");


  int option;
  printf("1 - População");
  printf("2 - Área");
  printf("3 - PIB");
  printf("4 - Número de pontos turísticos");
  printf("5 - Densidade demográfica");
  printf("Escolha qual atributo irá comparar: ");
  scanf("%d", &option);

  printf("comparação entre os paises %s VS %s\n", cidade, cidade2);
  switch(option) {
    case 1: {
      printf("Atributo população escolhido\n");
      printf("Carta 1 (%d) VS Carta 2 (%d)\n", populacao, populacao2);
      if (populacao > populacao2) {
        printf("Carta 1 ganhou!");
      } else if (populacao < populacao2) {
        printf("Carta 2 ganhou!");
      } else {
        printf("Carta empate ganhou!");
      }
      break;
    }
    case 2: {
      printf("Atributo área escolhido\n");
      printf("Carta 1 (%d) VS Carta 2 (%d)\n", area, area2);
      if (area > area2) {
        printf("Carta 1 ganhou!");
      } else if (area < area2) {
        printf("Carta 2 ganhou!");
      } else {
        printf("Carta empate ganhou!");
      }
      break;
    }
    case 3: {
      printf("Atributo PIB escolhido\n");
      printf("Carta 1 (%d) VS Carta 2 (%d)\n", pib, pib2);
      if (pib > pib2) {
        printf("Carta 1 ganhou!");
      } else if (pib < pib2) {
        printf("Carta 2 ganhou!");
      } else {
        printf("Carta empate ganhou!");
      }
      break;
    }
    case 4: {
      printf("Atributo número de pontos turísticos escolhido\n");
      printf("Carta 1 (%d) VS Carta 2 (%d)\n", pontosTuristicos, pontosTuristicos2);
      if (pontosTuristicos > pontosTuristicos2) {
        printf("Carta 1 ganhou!");
      } else if (pontosTuristicos < pontosTuristicos2) {
        printf("Carta 2 ganhou!");
      } else {
        printf("Carta empate ganhou!");
      }
      break;
    }
    case 5: {
      printf("Atributo densidade demográfica escolhido\n");
      printf("Carta 1 (%d) VS Carta 2 (%d)\n", densidadePopulacional, densidadePopulacional2);
      if (densidadePopulacional > densidadePopulacional2) {
        printf("Carta 1 ganhou!");
      } else if (densidadePopulacional < densidadePopulacional2) {
        printf("Carta 2 ganhou!");
      } else {
        printf("Carta empate ganhou!");
      }
      break;
    }
    default: printf("Opção digitada invalida!");
  }

  return 0;
} 
