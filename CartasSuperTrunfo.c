#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variaveis das cartas com arrays(mais organizado)
    char cod[2][4]; // vetor de 2 strings de até 3 caracteres + \0
    int populacao[2], nptur[2];
    float area[2], pib[2];

    // Cadastro da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", cod[0]);
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao[0]);
    printf("Digite a area da primeira carta: ");
    scanf("%f", &area[0]);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib[0]);
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &nptur[0]);

    // Cadastro da segunda carta
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%s", cod[1]);
    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao[1]);
    printf("Digite a area da segunda carta: ");
    scanf("%f", &area[1]);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib[1]);
    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &nptur[1]);

    // Exibição dos Dados das Cartas
    printf("\n######### Dados da Primeira Carta #########\n");
    printf("Codigo: %s\n", cod[0]);
    printf("Populacao: %d\n", populacao[0]);
    printf("Area: %.2f\n", area[0]);
    printf("PIB: %.2f\n", pib[0]);
    printf("Pontos Turisticos: %d\n", nptur[0]);

    printf("\n######### Dados da Segunda Carta #########\n");
    printf("Codigo: %s\n", cod[1]);
    printf("Populacao: %d\n", populacao[1]);
    printf("Area: %.2f\n", area[1]);
    printf("PIB: %.2f\n", pib[1]);
    printf("Pontos Turisticos: %d\n", nptur[1]);

    return 0;
}
