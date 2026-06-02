#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[3], codigo1[10], cidade1[50];
    char estado2[3], codigo2[10], cidade2[50];

    int populacao1, pontosTuristicos1;
    int populacao2, pontosTuristicos2;

    float area1, pib1;
    float area2, pib2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int atributo1, atributo2;

    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;

    float somaCarta1, somaCarta2;

    char nomeAtributo1[50];
    char nomeAtributo2[50];

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
     
    // CADASTRO DA CARTA 1 
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // CADASTRO DA CARTA 2
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

     // CÁLCULOS
       

     densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // EXIBIÇÃO DOS DADOS

     densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    , populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    /* ==========================
       ESCOLHA DO PRIMEIRO ATRIBUTO
       ========================== */

    printf("\n=====================================\n");
    printf(" ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("=====================================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");

    printf("\nEscolha: ");
    scanf("%d", &atributo1);

    /* ==========================
       ESCOLHA DO SEGUNDO ATRIBUTO
       ========================== */

    printf("\n=====================================\n");
    printf(" ESCOLHA O SEGUNDO ATRIBUTO\n");
    printf("=====================================\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Populacional\n");

    printf("\nEscolha: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nERRO: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    /* ==========================
       ATRIBUTO 1
       ========================== */

    switch (atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            strcpy(nomeAtributo1, "Populacao");
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            strcpy(nomeAtributo1, "Area");
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;

        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            strcpy(nomeAtributo1, "Densidade Populacional");
            break;

        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    /* ==========================
       ATRIBUTO 2
       ========================== */

    switch (atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            strcpy(nomeAtributo2, "Populacao");
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            strcpy(nomeAtributo2, "Area");
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;

        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            strcpy(nomeAtributo2, "Densidade Populacional");
            break;

        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    /* ==========================
       REGRA ESPECIAL DA DENSIDADE
       MENOR VALOR VENCE
       ========================== */

    if (atributo1 == 5) {
        valor1Carta1 = 1 / valor1Carta1;
        valor1Carta2 = 1 / valor1Carta2;
    }

    if (atributo2 == 5) {
        valor2Carta1 = 1 / valor2Carta1;
        valor2Carta2 = 1 / valor2Carta2;
    }

    /* ==========================
       SOMA DOS ATRIBUTOS
       ========================== */

    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    /* ==========================
       OPERADOR TERNÁRIO
       ========================== */

    char *vencedor =
        (somaCarta1 > somaCarta2) ? cidade1 :
        (somaCarta2 > somaCarta1) ? cidade2 :
        "Empate";

//COMPARAÇÃO 

     printf("\n\n=====================================\n");
    printf(" RESULTADO DA COMPARACAO\n");
    printf("=====================================\n");

    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2);

    printf("Atributo 1: %s\n", nomeAtributo1);
    printf("%s = %.2f\n", cidade1, valor1Carta1);
    printf("%s = %.2f\n\n", cidade2, valor1Carta2);

    printf("Atributo 2: %s\n", nomeAtributo2);
    printf("%s = %.2f\n", cidade1, valor2Carta1);
    printf("%s = %.2f\n\n", cidade2, valor2Carta2);

    printf("Soma da Carta 1: %.2f\n", somaCarta1);
    printf("Soma da Carta 2: %.2f\n\n", somaCarta2);

    if (somaCarta1 == somaCarta2) {
        printf("Resultado: Empate!\n");
    } else {
        printf("Cidade vencedora: %s\n", vencedor);
    }
    
    return 0;
}
