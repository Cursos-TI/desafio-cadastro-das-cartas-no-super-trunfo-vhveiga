#include <stdio.h>
#include <string.h>
int main() {
// Define tipos de dados para duas cartas do jogo Super Trunfo
    char estado1 ;
    char estado2 ;
    char codigo1[4] ;
    char codigo2[4] ;
    char cidade1[50] ;
    char cidade2[50] ;
    unsigned long int populacao1 ;
    unsigned long int populacao2 ;
    float area1 ;
    float area2 ;
    float pib1 ;
    float pib2 ;
    int pontosturisticos1 ;
    int pontosturisticos2 ;
    float pibpercapita1 ;
    float pibpercapita2 ;
    float densidade1 ;
    float densidade2 ;
    float superpoder1 ;
    float superpoder2 ;

// Inicializa variáveis
    estado1 = '\0';
    estado2 = '\0';
    strcpy(codigo1, "");
    strcpy(codigo2, "");
    strcpy(cidade1, "");
    strcpy(cidade2, "");
    populacao1 = 0;
    populacao2 = 0;
    area1 = 0.0f;
    area2 = 0.0f;
    pib1 = 0.0f;
    pib2 = 0.0f;
    pontosturisticos1 = 0;
    pontosturisticos2 = 0;
    pibpercapita1 = 0.0f;
    pibpercapita2 = 0.0f;
    densidade1 = 0.0f;
    densidade2 = 0.0f;
    superpoder1 = 0.0f;
    superpoder2 = 0.0f;

// Solicita dados da primeira carta
    printf("Digite a letra do estado da primeira carta:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (3 dígitos):\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade da primeira carta:\n");
    getchar(); 
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Digite a população da primeira carta:\n");
    scanf(" %lu", &populacao1);
    printf("Digite a área da primeira carta em km²:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira carta em bilhões de reais:\n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira carta:\n");
    scanf(" %d", &pontosturisticos1);

// Solicita dados da segunda carta
    printf("Digite a letra do estado da segunda carta:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (3 dígitos):\n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade da segunda carta:\n");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população da segunda carta:\n");
    scanf(" %lu", &populacao2);
    printf("Digite a área da segunda carta em km²:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda carta em bilhões de reais:\n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda carta:\n");
    scanf(" %d", &pontosturisticos2);

// Calcula PIB per capita e densidade populacional
    pibpercapita1 =  (float) pib1 * 1000000000 / populacao1;
    pibpercapita2 =  (float) pib2 * 1000000000 / populacao2;
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

// Calculando "Super Poder" das cartas
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidade1)); 
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidade2));

// Exibe os dados da primeira carta
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB per capita: %.2f R$\n", pibpercapita1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("Super Poder: %.2f\n", superpoder1);
    
// Exibe os dados da segunda carta
    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB per capita: %.2f R$\n", pibpercapita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("Super Poder: %.2f\n", superpoder2);

// Compara as cartas e exibe resultados
    printf("\nComparação das cartas\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Primeira carta vence" : "Segunda carta vence");
    printf("Área: %s\n", (area1 > area2) ? "Primeira carta vence" : "Segunda carta vence");
    printf("PIB: %s\n", (pib1 > pib2) ? "Primeira carta vence" : "Segunda carta vence");
    printf("Pontos turísticos: %s\n", (pontosturisticos1 > pontosturisticos2) ? "Primeira carta vence" : "Segunda carta vence");
    printf("PIB per capita: %s\n", (pibpercapita1 > pibpercapita2) ? "Primeira carta vence" : "Segunda carta vence");
    printf("Densidade populacional: %s\n", (densidade1 < densidade2) ? "Primeira carta vence" : "Segunda carta vence"); 
    printf("Super Poder: %s\n", (superpoder1 > superpoder2) ? "Primeira carta vence" : "Segunda carta vence");


return 0;
}
