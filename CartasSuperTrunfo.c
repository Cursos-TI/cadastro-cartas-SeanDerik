#include <stdio.h>

int main(void) {
    char estado1;
    char codigo1[20];
    char nome1[50];
    unsigned long populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[20];
    char nome2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("Carta 1 - Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Carta 1 - Codigo (sem espacos): ");
    scanf("%19s", codigo1);
    printf("Carta 1 - Nome da cidade (sem espacos): ");
    scanf("%49s", nome1);
    printf("Carta 1 - Populacao: ");
    scanf("%lu", &populacao1);
    printf("Carta 1 - Area (km2): ");
    scanf("%f", &area1);
    printf("Carta 1 - PIB: ");
    scanf("%f", &pib1);
    printf("Carta 1 - Pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCarta 2 - Estado (uma letra): ");
    scanf(" %c", &estado2);
    printf("Carta 2 - Codigo (sem espacos): ");
    scanf("%19s", codigo2);
    printf("Carta 2 - Nome da cidade (sem espacos): ");
    scanf("%49s", nome2);
    printf("Carta 2 - Populacao: ");
    scanf("%lu", &populacao2);
    printf("Carta 2 - Area (km2): ");
    scanf("%f", &area2);
    printf("Carta 2 - PIB: ");
    scanf("%f", &pib2);
    printf("Carta 2 - Pontos turisticos: ");
    scanf("%d", &pontos2);

    float densidade1 = 0.0f, pibPerCapita1 = 0.0f;
    float densidade2 = 0.0f, pibPerCapita2 = 0.0f;

    if (area1 > 0.0f) densidade1 = (float)populacao1 / area1;
    if (populacao1 > 0) pibPerCapita1 = pib1 / (float)populacao1;

    if (area2 > 0.0f) densidade2 = (float)populacao2 / area2;
    if (populacao2 > 0) pibPerCapita2 = pib2 / (float)populacao2;

    printf("\n\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km2\nPIB: %.2f\n",
           estado1, codigo1, nome1, populacao1, area1, pib1);
    printf("Densidade populacional: %.6f hab/km2\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km2\nPIB: %.2f\n",
           estado2, codigo2, nome2, populacao2, area2, pib2);
    printf("Densidade populacional: %.6f hab/km2\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPerCapita2);
    printf("Pontos turisticos: %d\n", pontos2);

    float invDens1 = (densidade1 > 0.0f) ? 1.0f / densidade1 : 0.0f;
    float invDens2 = (densidade2 > 0.0f) ? 1.0f / densidade2 : 0.0f;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + invDens1;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + invDens2;

    int vencePopulacao = (populacao1 > populacao2) ? 1 : 0;
    int venceArea = (area1 > area2) ? 1 : 0;
    int vencePib = (pib1 > pib2) ? 1 : 0;
    int vencePontos = (pontos1 > pontos2) ? 1 : 0;
    int venceDensidade = (densidade1 < densidade2) ? 1 : 0;
    int vencePibPerCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    int venceSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;

    printf("\n\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta %s venceu (%d)\n\n", vencePopulacao ? "1" : "2", vencePopulacao);
    printf("Area: Carta %s venceu (%d)\n\n", venceArea ? "1" : "2", venceArea);
    printf("PIB: Carta %s venceu (%d)\n\n", vencePib ? "1" : "2", vencePib);
    printf("Pontos Turisticos: Carta %s venceu (%d)\n\n", vencePontos ? "1" : "2", vencePontos);
    printf("Densidade Populacional: Carta %s venceu (%d)\n\n", venceDensidade ? "1" : "2", venceDensidade);
    printf("PIB per Capita: Carta %s venceu (%d)\n\n", vencePibPerCapita ? "1" : "2", vencePibPerCapita);
    printf("Super Poder: Carta %s venceu (%d)\n\n", venceSuperPoder ? "1" : "2", venceSuperPoder);

    return 0;
}
