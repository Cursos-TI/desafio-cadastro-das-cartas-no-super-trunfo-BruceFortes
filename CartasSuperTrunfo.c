#include <stdio.h>
    int main(){
        
    char estado[20];
    char codigo[4];
    char nomecidade[20];
    int populacao;
    float area;
    float pib;
    int num_de_pontos_turisticos;
    float densidade;
    float pib_per;

    char estado1[20];
    char codigo1[4];
    char nomecidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int num_de_pontos_turisticos1;
    float densidade1;
    float pib_per1;


    printf("Carta 1\n\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s",estado);
    printf("Cadastre a primeira carta:\n");
    printf("Digite o codigo da carta (ex: A01):");
    scanf("%s",codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s",nomecidade);
    printf("Digite a população:\n");
    scanf("%d", &populacao);
    printf("Digite a área:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &num_de_pontos_turisticos);
    densidade = (float)populacao / area;
    pib_per = (float)pib / populacao;

    printf("\n\nCarta 2\n\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s",estado1);
    printf("Cadastre a segunda carta:\n");
    printf("Digite o codigo da carta (ex: B01):");
    scanf("%s",codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s",nomecidade1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &num_de_pontos_turisticos1);
    densidade = (float)populacao1 / area1;
    pib_per = (float)pib1 / populacao1;

    printf("\n\nExibindo os Dados Cadastrados\n\n");
    
    printf("Carta 1\n");
    printf("Estado: %s\n",estado);
    printf("Código: %s\n",codigo);
    printf("Nome da Cidade: %s\n",nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", num_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB Per Capita: %.2f reais\n", pib_per);


    printf("\n\nCarta 2\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", num_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", pib_per1);


    return 0;


}