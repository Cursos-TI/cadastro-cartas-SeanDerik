#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  #include <stdio.h>
  
    /* Carta 1 */
    char estado1;
    char codigo1[20];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    /* Carta 2 */
    char estado2;
    char codigo2[20];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    /* Entrada - Carta 1 */
    printf("Carta 1 - Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Carta 1 - Codigo (sem espacos): ");
    scanf("%19s", codigo1);
    printf("Carta 1 - Nome da cidade (sem espacos): ");
    scanf("%49s", nome1);
    printf("Carta 1 - Populacao: ");
    scanf("%d", &populacao1);
    printf("Carta 1 - Area (km2): ");
    scanf("%f", &area1);
    printf("Carta 1 - PIB: ");
    scanf("%f", &pib1);
    printf("Carta 1 - Pontos turisticos: ");
    scanf("%d", &pontos1);

    /* Entrada - Carta 2 */
    printf("\nCarta 2 - Estado (uma letra): ");
    scanf(" %c", &estado2);
    printf("Carta 2 - Codigo (sem espacos): ");
    scanf("%19s", codigo2);
    printf("Carta 2 - Nome da cidade (sem espacos): ");
    scanf("%49s", nome2);
    printf("Carta 2 - Populacao: ");
    scanf("%d", &populacao2);
    printf("Carta 2 - Area (km2): ");
    scanf("%f", &area2);
    printf("Carta 2 - PIB: ");
    scanf("%f", &pib2);
    printf("Carta 2 - Pontos turisticos: ");
    scanf("%d", &pontos2);

    /* Saida simples e organizada */
    printf("\n\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f\nPontos turisticos: %d\n",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f\nPontos turisticos: %d\n",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

  // Área para exibição dos dados da cidade
  
  
return 0;
} 
