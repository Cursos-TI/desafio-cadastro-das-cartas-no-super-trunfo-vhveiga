#include <stdio.h>
#include <string.h>
int main() {
// Define tipos de dados para duas cartas do jogo Super Trunfo
    char estado1 ;
    char estado2 ;
    char codigo1[4] ;
    char codigo2[4] ;
    char cidade1[20] ;
    char cidade2[20] ;
    int populacao1 ;
    int populacao2 ;
    float area1 ;
    float area2 ;
    float pib1 ;
    float pib2 ;
    int pontosturisticos1 ;
    int pontosturisticos2 ;
// Solicita dados da primeira carta
    printf("Digite a letrao estado da primeira carta:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (3 dígitos):\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade da primeira carta:\n");
    scanf(" %s", cidade1);
    printf("Digite a população da primeira carta:\n");
    scanf(" %d", &populacao1);
    printf("Digite a área da primeira carta em km²:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira carta em reais:\n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira carta:\n");
    scanf(" %d", &pontosturisticos1);
// Solicita dados da segunda carta
    printf("Digite a letra do estado da segunda carta:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (3 dígitos):\n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade da segunda carta:\n");
    scanf(" %s", cidade2);
    printf("Digite a população da segunda carta:\n");
    scanf(" %d", &populacao2);
    printf("Digite a área da segunda carta em km²:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda carta em reais:\n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda carta:\n");
    scanf(" %d", &pontosturisticos2);
// Exibe os dados da primeira carta
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f R$\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
// Exibe os dados da segunda carta
    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f R$\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}
