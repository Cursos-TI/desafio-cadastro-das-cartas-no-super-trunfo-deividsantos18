#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{

    /*
        Aqui é a parte responsável pela criação das variáveis!
    */

    char estado;
    char codigo[10];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;


    /*
        Aqui é a parte responsável pela solicitação dos dados e atribuição dos valores às variáveis!
    */

    printf("\n\nCadastro da carta!\n\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código: \n");
    scanf("%s", codigo);

    getchar(); // Função usada pra consumir a quebra de linha (\n) deixada pelo scanf() anterior.

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 20, stdin); // A função scanf() causa problemas caso a cidade informada tenha espaços, por isso optei pela função fgets().

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    /*
        Aqui é a parte responsável pelo cáculo da densidade populacional e do PIB per capita!
    */

    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (float) pib / populacao;


    /*
        Aqui é a parte responsável pela exibição dos dados!
    */

    printf("\n\nDados da carta: \n\n");

    printf("Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d habitantes \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("Densidade Populacional: %.2f pessoas/km² \n", densidadePopulacional);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("PIB per Capita: R$%.2f por habitante \n", pibPerCapita);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);

    return 0;
}
