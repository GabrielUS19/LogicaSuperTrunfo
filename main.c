#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char inicial1, inicial2, code1[4], code2[4], cidade1[20], cidade2[20], opcao1, opcao2;
    char resultado1[100], resultado2[100], cidadeAtributos1[100], cidadeAtributos2[100];
    int quantidadePT1, quantidadePT2, pontosCidade1 = 0, pontosCidade2 = 0;
    float area1, area2, pib1, pib2, PIBpc1, PIBpc2, densidade1, densidade2, super1, super2;
    unsigned long int populacao1, populacao2;
    
    // Cadastro das Cartas:
    
    // Carta 1
    
    printf("Carta 1\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &inicial1);
    
    printf("Digite o código da carta: ");
    scanf("%s", code1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%ld", &populacao1);
    
    printf("Digite a área territorial da cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePT1);
    
    densidade1 = populacao1 / area1;
    PIBpc1 = pib1 / populacao1;

    super1 = populacao1 + area1 + pib1 + quantidadePT1 + PIBpc1 + (1/densidade1);
    
    // Carta 2
    
    printf("\nCarta 2\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &inicial2);
    
    printf("Digite o código da carta: ");
    scanf("%s", code2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%ld", &populacao2);
    
    printf("Digite a área territorial da cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePT2);
    
    densidade2 = populacao2 / area2;
    PIBpc2 = pib2 / populacao2;

    super2 = populacao2 + area2 + pib2 + quantidadePT2 + PIBpc2 + (1/densidade2);
    
    // Exibição dos Dados das Cartas:
    
    printf(
    "\nCarta 1:\n"
    "Estado: %c\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "Populacao: %ld\n"
    "Area: %.2f km²\n"
    "PIB: %.2f bilhoes de reais\n"
    "Numero de Pontos Turisticos: %d\n"
    "Densidade Demográfica: %.2f\n"
    "PIB per Capita: %.2f\n"
    "Super Poder: %.2f\n",
    inicial1, code1, cidade1, populacao1, area1, pib1, quantidadePT1, densidade1, PIBpc1, super1
    );
    
    printf(
    "\nCarta 2:\n"
    "Estado: %c\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "Populacao: %ld\n"
    "Area: %.2f km²\n"
    "PIB: %.2f bilhoes de reais\n"
    "Numero de Pontos Turisticos: %d\n"
    "Densidade Demográfica: %.2f\n"
    "PIB per Capita: %.2f\n"
    "Super Poder: %.2f\n",
    inicial2, code2, cidade2, populacao2, area2, pib2, quantidadePT2, densidade2, PIBpc2, super2
    );

    // Menu interativo

    char menu[172] = "\nA. População\n"
                     "B. Área\n"
                     "C. PIB\n"
                     "D. Pontos Turisticos\n"
                     "E. Densidade Populacional\n"
                     "F. PIB per capita\n"
                     "G. Super Poder\n"
                     "Opção: ";

    printf(
        "\n----- Super Trunfo -----\n"
        "\nEscolha um atributo\n"
    );

    printf("%s", menu);
    scanf(" %c", &opcao1);

    // Lógica de comparação do primeiro atributo

    switch (opcao1)
    {
        case 'A':
        case 'a':

            // função para atribuir um valor para uma string já existente
            
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "População: %s: %lu - %s: %lu", cidade1, populacao1, cidade2, populacao2);    

            if (populacao1 > populacao2) {
                snprintf(resultado1, sizeof(resultado1), "População: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (populacao1 < populacao2) {
                snprintf(resultado1, sizeof(resultado1), "População: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "População: Empate");

            }

            break;
        case 'B':
        case 'b':
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "Área: %s: %.2f - %s: %.2f", cidade1, area1, cidade2, area2);
        
            if (area1 > area2) {
                snprintf(resultado1, sizeof(resultado1), "Área: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (area1 < area2) {
                snprintf(resultado1, sizeof(resultado1), "Área: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "Área: Empate");
                
            }

            break;
        case 'C':
        case 'c':
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "PIB: %s: %.2f - %s: %.2f", cidade1, pib1, cidade2, pib2);

            if (pib1 > pib2) {
                snprintf(resultado1, sizeof(resultado1), "PIB: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (pib1 < pib2) {
                snprintf(resultado1, sizeof(resultado1), "PIB: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "PIB: Empate");
                
            }

            break;
        case 'D':
        case 'd':
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "Pontos Turisticos: %s: %d - %s: %d", cidade1, quantidadePT1, cidade2, quantidadePT2);

            if (quantidadePT1 > quantidadePT2) {
                snprintf(resultado1, sizeof(resultado1), "Pontos Turisticos: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (quantidadePT1 < quantidadePT2) {
                snprintf(resultado1, sizeof(resultado1), "Pontos Turisticos: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "Pontos Turisticos: Empate");
                
            }

            break;
        case 'E':
        case 'e':
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "Densidade Populacional: %s: %.2f - %s: %.2f", cidade1, densidade1, cidade2, densidade2);

            if (densidade1 < densidade2) {
                snprintf(resultado1, sizeof(resultado1), "Densidade Populacional: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (densidade1 > densidade2) {
                snprintf(resultado1, sizeof(resultado1), "Densidade Populacional: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "Densidade Populacional: Empate");
                
            }

            break;
        case 'F':
        case 'f':
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "PIB per capita: %s: %.2f - %s: %.2f", cidade1, PIBpc1, cidade2, PIBpc2);

            if (PIBpc1 > PIBpc2) {
                snprintf(resultado1, sizeof(resultado1), "PIB per capita: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (PIBpc1 < PIBpc2) {
                snprintf(resultado1, sizeof(resultado1), "PIB per capita: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "PIB per capita: Empate");
                
            }

            break;
        case 'G':
        case 'g':
            snprintf(cidadeAtributos1, sizeof(cidadeAtributos1), "Super Poder: %s: %.2f - %s: %.2f", cidade1, super1, cidade2, super2);

            if (super1 > super2) {
                snprintf(resultado1, sizeof(resultado1), "Super Poder: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (super1 < super2) {
                snprintf(resultado1, sizeof(resultado1), "Super Poder: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado1, sizeof(resultado1), "Super Poder: Empate");
                
            }

            break;
        default:
            printf("\nAtributo inválido!\n");
            break;
    }

    // Segundo menu interativo

    printf(
        "\nEscolha outro atributo\n"
        "Atenção: Você deve escolher um atributo diferente do primeiro.\n"
    );
    printf("%s", menu);
    scanf(" %c", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo!");

    } else {

        // Lógica de comparação do segundo atributo

        switch (opcao2)
    {
        case 'A':
        case 'a':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "População: %s: %lu - %s: %lu", cidade1, populacao1, cidade2, populacao2);

            if (populacao1 > populacao2) {
                snprintf(resultado2, sizeof(resultado2), "População: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (populacao1 < populacao2) {
                snprintf(resultado2, sizeof(resultado2), "População: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "População: Empate");

            }

            break;
        case 'B':
        case 'b':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "Área: %s: %.2f - %s: %.2f", cidade1, area1, cidade2, area2);

            if (area1 > area2) {
                snprintf(resultado2, sizeof(resultado2), "Área: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (area1 < area2) {
                snprintf(resultado2, sizeof(resultado2), "Área: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "Área: Empate");
                
            }

            break;
        case 'C':
        case 'c':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "PIB: %s: %.2f - %s: %.2f", cidade1, pib1, cidade2, pib2);

            if (pib1 > pib2) {
                snprintf(resultado2, sizeof(resultado2), "PIB: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (pib1 < pib2) {
                snprintf(resultado2, sizeof(resultado2), "PIB: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "PIB: Empate");
                
            }

            break;
        case 'D':
        case 'd':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "Pontos Turisticos: %s: %d - %s: %d", cidade1, quantidadePT1, cidade2, quantidadePT2);

            if (quantidadePT1 > quantidadePT2) {
                snprintf(resultado2, sizeof(resultado2), "Pontos Turisticos: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (quantidadePT1 < quantidadePT2) {
                snprintf(resultado2, sizeof(resultado2), "Pontos Turisticos: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "Pontos Turisticos: Empate");
                
            }

            break;
        case 'E':
        case 'e':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "Densidade Populacional: %s: %.2f - %s: %.2f", cidade1, densidade1, cidade2, densidade2);

            if (densidade1 < densidade2) {
                snprintf(resultado2, sizeof(resultado2), "Densidade Populacional: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (densidade1 > densidade2) {
                snprintf(resultado2, sizeof(resultado2), "Densidade Populacional: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "Densidade Populacional: Empate");
                
            }

            break;
        case 'F':
        case 'f':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "PIB per capita: %s: %.2f - %s: %.2f", cidade1, PIBpc1, cidade2, PIBpc2);

            if (PIBpc1 > PIBpc2) {
                snprintf(resultado2, sizeof(resultado2), "PIB per capita: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (PIBpc1 < PIBpc2) {
                snprintf(resultado2, sizeof(resultado2), "PIB per capita: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "PIB per capita: Empate");
                
            }

            break;
        case 'G':
        case 'g':
            snprintf(cidadeAtributos2, sizeof(cidadeAtributos2), "Super Poder: %s: %.2f - %s: %.2f", cidade1, super1, cidade2, super2);

            if (super1 > super2) {
                snprintf(resultado2, sizeof(resultado2), "Super Poder: Cidade %s venceu", cidade1);
                pontosCidade1++;

            } else if (super1 < super2) {
                snprintf(resultado2, sizeof(resultado2), "Super Poder: Cidade %s venceu", cidade2);
                pontosCidade2++;

            } else {
                snprintf(resultado2, sizeof(resultado2), "Super Poder: Empate");
                
            }

            break;
        default:
            printf("\nAtributo inválido!\n");
            break;
    }
    }

    // Impressão dos resultados

    printf("\nCidades: %s - %s\n", cidade1, cidade2);
    printf("%s\n%s", cidadeAtributos1, cidadeAtributos2);
    printf("\n%s\n%s\n", resultado1, resultado2);
    printf("\nResultado final: %s: %d - %s: %d\n", cidade1, pontosCidade1, cidade2, pontosCidade2);

    if (pontosCidade1 == pontosCidade2) {
        printf("Empate!");

    } else {
        pontosCidade1 > pontosCidade2 ? printf("%s venceu!", cidade1) : printf("%s venceu!", cidade2);
    }
    
    
    return 0;
}