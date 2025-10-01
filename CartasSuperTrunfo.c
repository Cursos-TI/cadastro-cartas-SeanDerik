#include <stdio.h>

int main(void) {
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

    /* Cálculos solicitados (armazenados em float) */
    float densidade1 = 0.0f, pibPerCapita1 = 0.0f;
    float densidade2 = 0.0f, pibPerCapita2 = 0.0f;

    if (area1 > 0.0f) {
        densidade1 = (float)populacao1 / area1;              /* hab/km² */
    }
    if (populacao1 > 0) {
        pibPerCapita1 = pib1 / (float)populacao1;            /* moeda por pessoa */
    }

    if (area2 > 0.0f) {
        densidade2 = (float)populacao2 / area2;
    }
    if (populacao2 > 0) {
        pibPerCapita2 = pib2 / (float)populacao2;
    }

    /* Saida simples e organizada */
    printf("\n\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f\n",
           estado1, codigo1, nome1, populacao1, area1, pib1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f\n",
           estado2, codigo2, nome2, populacao2, area2, pib2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
