#include <stdio.h>

int main() {
    char codigo1[10], nome1[30], estado1[30];
    int populacao1;
    float area1, pib1;
    int pontos1;

    char codigo2[10], nome2[30], estado2[30];
    int populacao2;
    float area2, pib2;
    int pontos2;

    // Carta 1
    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1 (sem espacos): ");
    scanf("%s", nome1);

    printf("Digite o estado da cidade 1 (sem espacos): ");
    scanf("%s", estado1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhoes de dolares): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nDigite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2 (sem espacos): ");
    scanf("%s", nome2);

    printf("Digite o estado da cidade 2 (sem espacos): ");
    scanf("%s", estado2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhoes de dolares): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontos2);

    // Mostrar resultado
    printf("\nCarta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes USD\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes USD\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
