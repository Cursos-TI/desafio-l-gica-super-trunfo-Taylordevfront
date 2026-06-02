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

    printf("\n\n=== DADOS DAS CARTAS ===\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

// COMPARAÇÃO

printf("\n\n=====================================\n");
printf("         MENU DE COMPARACAO\n");
printf("=====================================\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");
printf("=====================================\n");
printf("Escolha um atributo: ");
scanf("%d", &opcao);

printf("\n=====================================\n");

switch(opcao)
{
    case 1:

        printf("Atributo escolhido: Populacao\n\n");

        printf("%s: %d habitantes\n", cidade1, populacao1);
        printf("%s: %d habitantes\n", cidade2, populacao2);

        if(populacao1 > populacao2)
        {
            printf("\nVencedora: %s\n", cidade1);
        }
        else if(populacao2 > populacao1)
        {
            printf("\nVencedora: %s\n", cidade2);
        }
        else
        {
            printf("\nEmpate!\n");
        }

        break;

    case 2:

        printf("Atributo escolhido: Area\n\n");

        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);

        if(area1 > area2)
        {
            printf("\nVencedora: %s\n", cidade1);
        }
        else if(area2 > area1)
        {
            printf("\nVencedora: %s\n", cidade2);
        }
        else
        {
            printf("\nEmpate!\n");
        }

        break;

    case 3:

        printf("Atributo escolhido: PIB\n\n");

        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);

        if(pib1 > pib2)
        {
            printf("\nVencedora: %s\n", cidade1);
        }
        else if(pib2 > pib1)
        {
            printf("\nVencedora: %s\n", cidade2);
        }
        else
        {
            printf("\nEmpate!\n");
        }

        break;

    case 4:

        printf("Atributo escolhido: Pontos Turisticos\n\n");

        printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
        printf("%s: %d pontos\n", cidade2, pontosTuristicos2);

        if(pontosTuristicos1 > pontosTuristicos2)
        {
            printf("\nVencedora: %s\n", cidade1);
        }
        else if(pontosTuristicos2 > pontosTuristicos1)
        {
            printf("\nVencedora: %s\n", cidade2);
        }
        else
        {
            printf("\nEmpate!\n");
        }

        break;

    case 5:

        printf("Atributo escolhido: Densidade Populacional\n\n");

        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);

        /* REGRA ESPECIAL:
           MENOR DENSIDADE VENCE
        */

        if(densidade1 != densidade2)
        {
            if(densidade1 < densidade2)
            {
                printf("\nVencedora: %s\n", cidade1);
            }
            else
            {
                printf("\nVencedora: %s\n", cidade2);
            }
        }
        else
        {
            printf("\nEmpate!\n");
        }

        break;

    default:

        printf("\nOpcao invalida!\n");
        printf("Escolha um numero de 1 a 5.\n");
}
    return 0;
}
