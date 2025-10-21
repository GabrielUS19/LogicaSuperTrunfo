#include <stdio.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

bool possui(int array[], int tamanhoArray, int item) {
    for (int i = 0; i < tamanhoArray; i++) {
        if (item == array[i]) return true;
    }

    return false;
}

int main() {
    // char inicial1, inicial2, code1[4], code2[4], cidade1[20], cidade2[20];
    // int quantidadePT1, quantidadePT2, opcao1, opcao2;
    // float area1, area2, pib1, pib2, PIBpc1, PIBpc2, densidade1, densidade2, super1, super2;
    // unsigned long int populacao1, populacao2;
    
    // // Cadastro das Cartas:
    
    // // Carta 1
    
    // printf("Carta 1\n");
    // printf("Digite a inicial do estado: ");
    // scanf(" %c", &inicial1);
    
    // printf("Digite o código da carta: ");
    // scanf("%s", code1);
    
    // printf("Digite o nome da cidade: ");
    // scanf("%s", cidade1);
    
    // printf("Digite a quantidade de habitantes da cidade: ");
    // scanf("%ld", &populacao1);
    
    // printf("Digite a área territorial da cidade: ");
    // scanf("%f", &area1);
    
    // printf("Digite o PIB da cidade: ");
    // scanf("%f", &pib1);
    
    // printf("Digite a quantidade de pontos turisticos: ");
    // scanf("%d", &quantidadePT1);
    
    // densidade1 = populacao1 / area1;
    // PIBpc1 = pib1 / populacao1;

    // super1 = populacao1 + area1 + pib1 + quantidadePT1 + PIBpc1 + (1/densidade1);
    
    // // Carta 2
    
    // printf("\nCarta 2\n");
    // printf("Digite a inicial do estado: ");
    // scanf(" %c", &inicial2);
    
    // printf("Digite o código da carta: ");
    // scanf("%s", code2);
    
    // printf("Digite o nome da cidade: ");
    // scanf("%s", cidade2);
    
    // printf("Digite a quantidade de habitantes da cidade: ");
    // scanf("%ld", &populacao2);
    
    // printf("Digite a área territorial da cidade: ");
    // scanf("%f", &area2);
    
    // printf("Digite o PIB da cidade: ");
    // scanf("%f", &pib2);
    
    // printf("Digite a quantidade de pontos turisticos: ");
    // scanf("%d", &quantidadePT2);
    
    // densidade2 = populacao2 / area2;
    // PIBpc2 = pib2 / populacao2;

    // super2 = populacao2 + area2 + pib2 + quantidadePT2 + PIBpc2 + (1/densidade2);
    
    // // Exibição dos Dados das Cartas:
    
    // printf(
    // "\nCarta 1:\n"
    // "Estado: %c\n"
    // "Codigo: %s\n"
    // "Nome da cidade: %s\n"
    // "Populacao: %ld\n"
    // "Area: %.2f km²\n"
    // "PIB: %.2f bilhoes de reais\n"
    // "Numero de Pontos Turisticos: %d\n"
    // "Densidade Demográfica: %.2f\n"
    // "PIB per Capita: %.2f\n"
    // "Super Poder: %.2f\n",
    // inicial1, code1, cidade1, populacao1, area1, pib1, quantidadePT1, densidade1, PIBpc1, super1
    // );
    
    // printf(
    // "\nCarta 2:\n"
    // "Estado: %c\n"
    // "Codigo: %s\n"
    // "Nome da cidade: %s\n"
    // "Populacao: %ld\n"
    // "Area: %.2f km²\n"
    // "PIB: %.2f bilhoes de reais\n"
    // "Numero de Pontos Turisticos: %d\n"
    // "Densidade Demográfica: %.2f\n"
    // "PIB per Capita: %.2f\n"
    // "Super Poder: %.2f\n",
    // inicial2, code2, cidade2, populacao2, area2, pib2, quantidadePT2, densidade2, PIBpc2, super2
    // );

    char   inicial1 = 'C';
    char   code1[4] = "CE1";
    char   cidade1[100] = "Fortaleza";
    long   populacao1 = 2703391L;          // %ld
    double area1 = 313.14;                 // %.2f
    double pib1 = 67.02;                   // %.2f (Bilhões de R$)
    int    quantidadePT1 = 22;             // %d
    double densidade1 = 8633.25;           // %.2f (hab/km²)
    double PIBpc1 = 24791.31;              // %.2f (R$)
    double super1 = 8.8;                   // %.2f (Poder arbitrário)

    // --- Carta 2: São Paulo ---
    
    char   inicial2 = 'S';
    char code2[4] = "SP1";
    char cidade2[100] = "Sao Paulo"; // Usando 'o' para simplificar (sem 'ã')
    long   populacao2 = 12396372L;         // %ld
    double area2 = 1521.11;                // %.2f
    double pib2 = 763.80;                  // %.2f (Bilhões de R$)
    int    quantidadePT2 = 45;             // %d
    double densidade2 = 8150.00;           // %.2f (hab/km²)
    double PIBpc2 = 61616.03;              // %.2f (R$)
    double super2 = 9.4;

    // Termina aqui

    // Menu interativo

    int opcao1, opcao2;
    int opcoes[] = {1, 2, 3, 4, 5, 6, 7};
    int tamanhoOpcoes = sizeof(opcoes) / sizeof(opcoes[0]);
    bool opcaoValida;


    do
    {
        printf(
        "\nEscolha o primeiro atributo para comparar:\n"
        "1. População\n"
        "2. Area:\n"
        "3. PIB\n"
        "4. Pontos Turisticos\n"
        "5. Densidade Populacional\n"
        "6. PIB per capita\n"
        "7. Super Poder\n\n"
        "Opção: "
        );
        scanf("%d", &opcao1);

        opcaoValida = possui(opcoes, tamanhoOpcoes, opcao1);

        opcaoValida ? printf("\nOpção escolhida: %d\n", opcao1) : printf("\nOpção inválida!\n");

    } while (!opcaoValida);

    do
    {
        switch (opcao1)
        {
        case 1:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "2. Area:\n"
            "3. PIB\n"
            "4. Pontos Turisticos\n"
            "5. Densidade Populacional\n"
            "6. PIB per capita\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        case 2:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "1. População\n"
            "3. PIB\n"
            "4. Pontos Turisticos\n"
            "5. Densidade Populacional\n"
            "6. PIB per capita\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        case 3:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "1. População\n"
            "2. Area:\n"
            "4. Pontos Turisticos\n"
            "5. Densidade Populacional\n"
            "6. PIB per capita\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        case 4:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "1. População\n"
            "2. Area:\n"
            "3. PIB\n"
            "5. Densidade Populacional\n"
            "6. PIB per capita\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        case 5:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "1. População\n"
            "2. Area:\n"
            "3. PIB\n"
            "4. Pontos Turisticos\n"
            "6. PIB per capita\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        case 6:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "1. População\n"
            "2. Area:\n"
            "3. PIB\n"
            "4. Pontos Turisticos\n"
            "5. Densidade Populacional\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        case 7:
            printf(
            "\nEscolha o segundo atributo para comparar:\n"
            "1. População\n"
            "2. Area:\n"
            "3. PIB\n"
            "4. Pontos Turisticos\n"
            "5. Densidade Populacional\n"
            "6. PIB per capita\n"
            "7. Super Poder\n\n"
            "Opção: "
            );
            scanf("%d", &opcao2);

            opcaoValida = possui(opcoes, tamanhoOpcoes, opcao2);

            !opcaoValida || opcao1 == opcao2 ? printf("\nOpção inválida!\n") : printf("\nOpção escolhida: %d\n", opcao2);

            break;
        default:
            opcaoValida = false;
            printf("\nOpção Inválida\n");
            break;
    }
    } while (!opcaoValida || opcao1 == opcao2);
    
    return 0;
}