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
    int area1 ;
    int area2 ;
    int pib1 ;
    int pib2 ;
    int pontosturisticos1 ;
    int pontosturisticos2 ;
    float pibpercapita1 ;
    float pibpercapita2 ;
    float densidade1 ;
    float densidade2 ;

// Inicializa variáveis
    estado1 = '\0';
    estado2 = '\0';
    strcpy(codigo1, "");
    strcpy(codigo2, "");
    strcpy(cidade1, "");
    strcpy(cidade2, "");
    populacao1 = 0;
    populacao2 = 0;
    area1 = 0;
    area2 = 0;
    pib1 = 0;
    pib2 = 0;
    pontosturisticos1 = 0;
    pontosturisticos2 = 0;
    pibpercapita1 = 0.0f;
    pibpercapita2 = 0.0f;
    densidade1 = 0.0f;
    densidade2 = 0.0f;
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
    scanf(" %d", &area1);
    printf("Digite o PIB da primeira carta em bilhões dereais:\n");
    scanf(" %d", &pib1);
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
    scanf(" %d", &area2);
    printf("Digite o PIB da segunda carta em bilhões dereais:\n");
    scanf(" %d", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda carta:\n");
    scanf(" %d", &pontosturisticos2);

// Calcula PIB per capita e densidade populacional
    pibpercapita1 = (float) pib1 * 1000000000 / populacao1;
    pibpercapita2 = (float) pib2 * 1000000000 / populacao2;
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

// Exibe os dados da primeira carta
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: %d bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB per capita: %.2f R$\n", pibpercapita1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);

// Exibe os dados da segunda carta
    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: %d bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB per capita: %.2f R$\n", pibpercapita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);

    return 0;
}
