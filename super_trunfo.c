#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[3];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (sigla): ");
    scanf("%s", carta1.estado);
    printf("Código da carta: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da Carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cadastro da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (sigla): ");
    scanf("%s", carta2.estado);
    printf("Código da carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da Carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===== COMPARAÇÃO (atributo escolhido: População) =====
    printf("\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %lu\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %lu\n", carta2.nome, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
