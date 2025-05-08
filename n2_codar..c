#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Carta 1
    struct Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 2300000000.00, 25};
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Carta 2
    struct Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6000000, 1200.00, 1000000000.00, 15};
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibir dados das cartas
    printf("=== CARTA 1 ===\n");
    printf("Cidade: %s (%s)\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n\n",
           carta1.cidade, carta1.estado, carta1.populacao, carta1.area, carta1.pib,
           carta1.pontosTuristicos, carta1.densidadePopulacional, carta1.pibPerCapita);

    printf("=== CARTA 2 ===\n");
    printf("Cidade: %s (%s)\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\n\n",
           carta2.cidade, carta2.estado, carta2.populacao, carta2.area, carta2.pib,
           carta2.pontosTuristicos, carta2.densidadePopulacional, carta2.pibPerCapita);

    // COMPARAÇÃO - ESCOLHA FIXA: POPULAÇÃO
    printf(">>> Comparação de cartas (Atributo: População)\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
