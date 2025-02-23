#include <stdio.h>

int main() {
    // Variáveis para duas cartas
    char estado1[1], estado2[1];
    char codigo_carta1[3], codigo_carta2[3];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int qnt_pnts_turistico1, qnt_pnts_turistico2;

    // Inserir dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo_carta1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qnt_pnts_turistico1);

    // Inserir dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo_carta2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qnt_pnts_turistico2);

    // Exibir dados das duas cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", qnt_pnts_turistico1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", qnt_pnts_turistico2);

    return 0;
}