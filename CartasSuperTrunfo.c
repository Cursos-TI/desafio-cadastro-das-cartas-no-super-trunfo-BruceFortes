#include <stdio.h>
int main()
{
    // Variáveis Carta 1
    char estado1[20];
    char codigo1[4];
    char nomecidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numpontur1;
    float densidade1;
    float pibper1;
    float superpoder1;

    // Variáveis Carta 2
    char estado2[20];
    char codigo2[4];
    char nomecidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numpontur2;
    float densidade2;
    float pibper2;
    float superpoder2;

    // Leitura de dados Carta 1
    printf("Carta 1\n\n");
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado1);
    printf("Cadastre a primeira carta:\n");
    printf("Digite o codigo da carta (ex: A01):");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numpontur1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibper1 = (float)pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + numpontur1 + pibper1 + (1 / densidade1);

    // Leitura de dados Carta 2
    printf("\n\nCarta 2\n\n");
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado2);
    printf("Cadastre a segunda carta:\n");
    printf("Digite o codigo da carta (ex: B01):");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numpontur2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + numpontur2 + pibper2 + (1 / densidade2);

    printf("\n\n*** Exibindo os Dados Cadastrados ***\n\n");

    // Dados Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", numpontur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", pibper1);
    printf("Super Poder: %.2f \n", superpoder1);

    // Dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", numpontur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", pibper2);
    printf("Super Poder: %.2f \n", superpoder2);

    // Comparação entre as Cartas
    printf("\n*** Comparação entre as Cartas: ***\n\n");

    printf("Carta 1:\n");
    printf("População Carta 1: %d\n", populacao1 > populacao2);
    printf("Área Carta 1: %d\n", area1 > area2);
    printf("PIB Carta 1: %d\n", pib1 > pib2);
    printf("Ponto Turísticos Carta 1: %d\n", numpontur1 > numpontur2);
    printf("Densidade Populacional Carta 1: %d\n", densidade1 > densidade2);
    printf("PIB Per Capita Carta 1: %d\n", pibper1 > pibper2);
    printf("Super poder Carta 1: %d\n", superpoder1 > superpoder2);

    printf("\nCarta 2:\n");
    printf("População Carta 2: %d\n", populacao2 > populacao1);
    printf("Área Carta 2: %d\n", area2 > area1);
    printf("PIB Carta 2: %d\n", pib2 > pib1);
    printf("Ponto Turísticos Carta 2: %d\n", numpontur2 > numpontur1);
    printf("Densidade Populacional Carta 2: %d\n", densidade2 > densidade1);
    printf("PIB Per Capita Carta 2: %d\n", pibper2 > pibper1);
    printf("Super poder Carta 2: %d\n", superpoder2 > superpoder1);

    printf("\n*** Exibir os resultdos das comparações: ***\n\n");

    // População
    printf("População:\n %s %s\n",
           populacao1 > populacao2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           populacao2 > populacao1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           populacao1, populacao2);

    // Área
    printf("Área:\n %s %s\n",
           area1 > area2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           area2 > area1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           area1, area2);

    // PIB
    printf("PIB:\n %s %s\n",
           pib1 > pib2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           pib2 > pib1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           pib1, pib2);

    // Pontos Turísticos
    printf("Pontos Turísticos:\n %s %s\n",
           numpontur1 > numpontur2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           numpontur2 > numpontur1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           numpontur1, numpontur2);

    // Densidade Populacional
    printf("Densidade Populacional:\n %s %s\n",
           densidade1 > densidade2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           densidade2 > densidade1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           densidade1, densidade2);

    // PIB per Capita
    printf("PIB per Capita:\n %s %s\n",
           pibper1 > pibper2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           pibper2 > pibper1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           pibper1, pibper2);

    // Super Poder
    printf("Super Poder:\n %s %s\n",
           superpoder1 > superpoder2 ? "Carta 1 Venceu\n" : "Carta 1 Perdeu\n",
           superpoder2 > superpoder1 ? "Carta 2 Venceu\n" : "Carta 2 Perdeu\n",
           superpoder1, superpoder2);

    return 0;
}
