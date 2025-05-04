#include <stdio.h>

// Função auxiliar para calcular o Super Poder
float calcularSuperPoder(unsigned long int populacao, float area, float pib, int pontosTuristicos, float pibPerCapita, float densidade) {
    return (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1 / densidade);
}

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos das duas cartas
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidade2);

    // Comparações
    int venceuPopulacao = populacao1 > populacao2;
    int venceuArea = area1 > area2;
    int venceuPib = pib1 > pib2;
    int venceuPontos = pontosTuristicos1 > pontosTuristicos2;
    int venceuDensidade = densidade1 < densidade2; // menor densidade vence
    int venceuPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int venceuSuperPoder = superPoder1 > superPoder2;

    // Exibição dos dados e comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);

    return 0;
}
