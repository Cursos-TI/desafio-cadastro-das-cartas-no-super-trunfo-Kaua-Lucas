#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Dados da carta 1

    char estado1; // Inicial do estado escolhido pelo usuário (ex: 'C' para Ceará).
    char codigoDaCarta1[10]; // Código da carta (ex: 'A01').
    char nomeDaCidade1[30]; // Nome da cidade (ex: 'Fortaleza').
    int populacao1; // População da cidade.
    float areaKm1; // Área da cidade em km².
    float pib1; // PIB da cidade em milhões de reais.
    int qtdPontosTuristicos1; // Quantidade de pontos turísticos na cidade.
    
    float densidadePopulacional1; //Aqui sera Divida a população da cidade pela sua área.
    float pibPerCapital1;//Aqui sera Divida o PIB da cidade pela sua população.
    
    //long double SuperPoder1;// Somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional  

    // Dados da carta 2

    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    int populacao2;
    float areaKm2;
    float pib2;
    int qtdPontosTuristicos2;
    
    float densidadePopulacional2;
    float pibPerCapital2;

    //long double SuperPoder2;


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // A leitura dos dados da carta 1

    printf("Digite os dados da carta 1 abaixo:\n");

    printf("\nDigite a inicial do estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'): ");
    scanf("%s", &codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeDaCidade1);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área em Km² da cidade: ");
    scanf("%f", &areaKm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos1);

    // A leitura dos dados da carta 2

    printf("\nDigite os dados da carta 2 abaixo:\n");

    printf("\nDigite a inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'): ");
    scanf("%s", &codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeDaCidade2);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área em Km² da cidade: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos2);


    //Aqui sera feito os calculos do densidadePopulaional e pibPerCapital e super poder

    //carta 1
    densidadePopulacional1 = (float) populacao1 / areaKm1 ;
    pibPerCapital1 = (float) pib1 / populacao1;

   // SuperPoder1 = (long double)  ( populacao1 + areaKm1 + pib1 + qtdPontosTuristicos1 + pibPerCapital1 ) + (1/densidadePopulacional1);


    //carta 2
    densidadePopulacional2 = (float) populacao2 / areaKm2 ;
    pibPerCapital2 = (float) pib2 / populacao2;

    //SuperPoder2 = (long double)  ( populacao2 + areaKm2 + pib2 + qtdPontosTuristicos2 + pibPerCapital2 ) + (1/densidadePopulacional2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Saída dos dados das cartas 1 e 2:
    // Mostra as cartas e suas informações.

    // Menu interativo
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1: // População
        
        printf("Atributo: População\n");
        printf("%s: %d\n", nomeDaCidade1, populacao1);
        printf("%s: %d\n", nomeDaCidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: %s venceu!\n", nomeDaCidade1);
   

        } else if (populacao2 > populacao1) {
            printf("Resultado: %s venceu!\n", nomeDaCidade2);
        } else {
    
            printf("Resultado: Empate!\n");
    
        }
    
        break;
    case 2: // Área
        
        printf("Atributo: Área\n");
        printf("%s: %.2f\n", nomeDaCidade1, areaKm1);
        printf("%s: %.2f\n", nomeDaCidade2, areaKm2);

        if (areaKm1 > areaKm2) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade1);

        } else if (areaKm2 > areaKm1) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade2);
        
        } else {
        
            printf("Resultado: Empate!\n");
        
        }
        break;
    case 3: // PIB
        
        printf("Atributo: PIB\n");
        printf("%s: %.2f\n", nomeDaCidade1, pib1);
        printf("%s: %.2f\n", nomeDaCidade2, pib2);

        if (pib1 > pib2) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade1);

        } else if (pib2 > pib1) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade2);
        
        } else {
        
            printf("Resultado: Empate!\n");
        
        }
        break;
    case 4: // Pontos turísticos
        
        printf("Atributo: Pontos turísticos\n");
        printf("%s: %d\n", nomeDaCidade1, qtdPontosTuristicos1);
        printf("%s: %d\n", nomeDaCidade2, qtdPontosTuristicos2);

        if (qtdPontosTuristicos1 > qtdPontosTuristicos2) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade1);

        } else if (qtdPontosTuristicos2 > qtdPontosTuristicos1) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade2);
        
        } else {
        
            printf("Resultado: Empate!\n");
        
        }
        break;
    case 5: // Densidade demográfica
        
        printf("Atributo: Densidade demográfica\n");
        printf("%s: %.2f\n", nomeDaCidade1, densidadePopulacional1);
        printf("%s: %.2f\n", nomeDaCidade2, densidadePopulacional2);

        if (densidadePopulacional1 < densidadePopulacional2) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade1);

        } else if (densidadePopulacional2 < densidadePopulacional1) {
            
            printf("Resultado: %s venceu!\n", nomeDaCidade2);
        
        } else {
        
            printf("Resultado: Empate!\n");
        
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }


      

    


    return 0;
}