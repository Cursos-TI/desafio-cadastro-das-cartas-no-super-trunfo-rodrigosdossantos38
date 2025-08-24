#include <stdio.h>

int main() {
    // Carta 1 - Pinhais
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Pinhais";
    int populacao1 = 133500;
    float area1 = 60.92;
    float pib1 = 7.2; // em bilhões de reais
    int pontosTuristicos1 = 5;

    // Carta 2 - Florianópolis
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Florianopolis";
    int populacao2 = 537200;
    float area2 = 675.40;
    float pib2 = 29.5; // em bilhões de reais
    int pontosTuristicos2 = 20;

    // Exibição das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}