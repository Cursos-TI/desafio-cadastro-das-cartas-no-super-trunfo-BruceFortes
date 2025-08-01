#include <stdio.h>
    int main(){
    char estado[20];
    char codigo[4];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int num_de_pontos_turisticos;

    char estado1[20];
    char codigo1[4];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int num_de_pontos_turisticos1;



    printf("Carta 1\n\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s", estado);
    printf("Cadastre a primeira carta:\n");
    printf("Digite o codigo da carta (ex: A01):");
    scanf("%s", codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade);
    printf("Digite a população:\n");
    scanf("%d", &populacao);
    printf("Digite a área:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &num_de_pontos_turisticos);

    printf("\n\nCarta 2\n\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s", estado1);
    printf("Cadastre a primeira carta:\n");
    printf("Digite o codigo da carta (ex: B01):");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &num_de_pontos_turisticos1);

    printf("\n\nExibindo os Dados Cadastrados\n\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Números de Pontos Turísticos: %d\n", num_de_pontos_turisticos);


    printf("\n\nCarta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", num_de_pontos_turisticos1);


    return 0;


}