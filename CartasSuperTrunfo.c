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
    scanf(" %s", nomeDaCidade2);

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
    int escolha, resultado1 = 0, resultado2 = 0;
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
        case 1: // População    /  primeira opção
        
            printf("\nParabens escolheu o primeiro atributo, agora escolha o segundo atributo para se fazer a comparação");
            printf("\nEscolha o atributo para comparação:\n");
            printf("1. Área\n");
            printf("2. PIB\n");
            printf("3. Pontos turísticos\n");
            printf("4. Densidade demográfica\n");
            printf("Opção: ");
            scanf("%d", &escolha);

            switch (escolha) // (População)    /  segunda opção
            {
            case 1://area // (População)    /  segunda opção

                printf("\nAtributos: População e Área\n");
                printf("%s: %d , %.2f \n", nomeDaCidade1, populacao1, areaKm1);
                printf("%s: %d , %.2f \n", nomeDaCidade2, populacao2, areaKm2);

                //A soma do resultado da populacão
                resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
                resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

                //A soma do resultado da area
                resultado1 += (areaKm1 > areaKm2)  ? 1 : 0 ;
                resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }


                break;

            case 2://pib // (População)    /  segunda opção
                
                printf("\nAtributos: População e PIB\n");
                printf("%s: %d , %.2f \n", nomeDaCidade1, populacao1, pib1);
                printf("%s: %d , %.2f \n", nomeDaCidade2, populacao2, pib2);

                //A soma do resultado da populacão
                resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
                resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

                //A soma do resultado da pib
                resultado1 += (pib1 > pib2)  ? 1 : 0 ;
                resultado2 += (pib2 > pib1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }
                break;
            
            case 3: //Pontos turísticos // (População)    /  segunda opção

                printf("\nAtributos: População e Pontos turísticos\n");
                printf("%s: %d , %d \n", nomeDaCidade1, populacao1, qtdPontosTuristicos1);
                printf("%s: %d , %d \n", nomeDaCidade2, populacao2, qtdPontosTuristicos2);

                //A soma do resultado da populacão
                resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
                resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

                //A soma do resultado da pontos turisticos
                resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2)  ? 1 : 0 ;
                resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }
                break;

            case 4: // Densidade demográfica // (População)    /  segunda opção
                
                printf("\nAtributos: População e Densidade demográfica\n");
                printf("%s: %d , %.2f \n", nomeDaCidade1, populacao1, densidadePopulacional1);
                printf("%s: %d , %.2f \n", nomeDaCidade2, populacao2, densidadePopulacional2);

                //A soma do resultado da populacão
                resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
                resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

                //A soma do resultado da Densidade demográfica
                resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
                resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }
                break;
                
            default:
                printf("Erro a não escolher um dos atributos mostrado no menu.");
                break;
            }

            

            
    
            break;
        
        case 2: // Área 
            
            printf("\nParabens escolheu o primeiro atributo, agora escolha o segundo atributo para se fazer a comparação");
            printf("\nEscolha o atributo para comparação:\n");
            printf("1. população\n");
            printf("2. PIB\n");
            printf("3. Pontos turísticos\n");
            printf("4. Densidade demográfica\n");
            printf("Opção: ");
            scanf("%d", &escolha);

            switch (escolha) // (area)    /  segunda opção
            {
            case 1://area // (area)    /  segunda opção

                printf("\nAtributos: População e Área\n");
                printf("%s: %d , %.2f \n", nomeDaCidade1, populacao1, areaKm1);
                printf("%s: %d , %.2f \n", nomeDaCidade2, populacao2, areaKm2);

                

                //A soma do resultado da area
                resultado1 += (areaKm1 > areaKm2)  ? 1 : 0 ;
                resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;

                //A soma do resultado da populacão
                resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
                resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }


                break;

            case 2://pib // (area)    /  segunda opção
                
                printf("\nAtributos: areaKm e PIB\n");
                printf("%s: %d , %.2f \n", nomeDaCidade1, areaKm1, pib1);
                printf("%s: %d , %.2f \n", nomeDaCidade2, areaKm2, pib2);

                //A soma do resultado da areakm
                resultado1 += (areaKm1 > areaKm2) ? 1 : 0 ;
                resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;

                //A soma do resultado da pib
                resultado1 += (pib1 > pib2)  ? 1 : 0 ;
                resultado2 += (pib2 > pib1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }
                break;
            
            case 3: //Pontos turísticos // (area)    /  segunda opção

                printf("\nAtributos: areakm e Pontos turísticos\n");
                printf("%s: %d , %d \n", nomeDaCidade1, areaKm1, qtdPontosTuristicos1);
                printf("%s: %d , %d \n", nomeDaCidade2, areaKm2, qtdPontosTuristicos2);

                //A soma do resultado da areakm
                resultado1 += (areaKm1 > areaKm2) ? 1 : 0 ;
                resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;

                //A soma do resultado da pontos turisticos
                resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2)  ? 1 : 0 ;
                resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }
                break;

            case 4: // Densidade demográfica // (area)    /  segunda opção
                
                printf("\nAtributos: areakm e Densidade demográfica\n");
                printf("%s: %d , %.2f \n", nomeDaCidade1, areaKm1, densidadePopulacional1);
                printf("%s: %d , %.2f \n", nomeDaCidade2, areaKm2, densidadePopulacional2);

                //A soma do resultado da areakm
                resultado1 += (areaKm1 > areaKm2) ? 1 : 0 ;
                resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;

                //A soma do resultado da Densidade demográfica
                resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
                resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

                //resultado
                if(resultado1 > resultado2){
                    
                    printf("Resultado: %s venceu!\n", nomeDaCidade1);

                }else if (resultado2 > resultado1) {
            
                    printf("Resultado: %s venceu!\n", nomeDaCidade2);
                
                } else {
                
                    printf("Resultado: Empate!\n");
                
                }
                break;
                
            default:
                printf("Erro a não escolher um dos atributos mostrado no menu.");
                break;
            }

            

            

        break;
    case 3: // PIB
        
        printf("\nParabens escolheu o primeiro atributo, agora escolha o segundo atributo para se fazer a comparação");
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. população\n");
        printf("2. Área\n");
        printf("3. Pontos turísticos\n");
        printf("4. Densidade demográfica\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) // (PIB)    /  segunda opção
        {
        case 1://area // (PIB)    /  segunda opção

            printf("\nAtributos: População e pib\n");
            printf("%s: %d , %.2f \n", nomeDaCidade1, populacao1, pib1);
            printf("%s: %d , %.2f \n", nomeDaCidade2, populacao2, pib2);

            

            //A soma do resultado da pib
            resultado1 += (pib1 > pib2)  ? 1 : 0 ;
            resultado2 += (pib2 > pib1) ? 1 : 0 ;

            //A soma do resultado da populacão
            resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
            resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }


            break;

        case 2://pib // (PIB)    /  segunda opção
            
            printf("\nAtributos: areaKm e PIB\n");
            printf("%s: %.2f  , %.2f \n", nomeDaCidade1, areaKm1, pib1);
            printf("%s: %.2f  , %.2f \n", nomeDaCidade2, areaKm2, pib2);

            //A soma do resultado da pib
            resultado1 += (pib1 > pib2)  ? 1 : 0 ;
            resultado2 += (pib2 > pib1) ? 1 : 0 ;

            //A soma do resultado da areakm
            resultado1 += (areaKm1 > areaKm2) ? 1 : 0 ;
            resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;


            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;
        
        case 3: //Pontos turísticos // (PIB)    /  segunda opção

            printf("\nAtributos: pib e Pontos turísticos\n");
            printf("%s: %d , %d \n", nomeDaCidade1, pib1, qtdPontosTuristicos1);
            printf("%s: %d , %d \n", nomeDaCidade2, pib2, qtdPontosTuristicos2);

            //A soma do resultado da areakm
            resultado1 += (pib1 > pib2) ? 1 : 0 ;
            resultado2 += (pib2 > pib1) ? 1 : 0 ;

            //A soma do resultado da pontos turisticos
            resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2)  ? 1 : 0 ;
            resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;

        case 4: // Densidade demográfica // (PIB)    /  segunda opção
            
            printf("\nAtributos: pib e Densidade demográfica\n");
            printf("%s: %.2f  , %.2f  \n", nomeDaCidade1, pib1, densidadePopulacional1);
            printf("%s: %.2f  , %.2f  \n", nomeDaCidade2, pib2, densidadePopulacional2);

            //A soma do resultado da areakm
            resultado1 += (pib1 > pib2) ? 1 : 0 ;
            resultado2 += (pib2 > pib1) ? 1 : 0 ;

            //A soma do resultado da Densidade demográfica
            resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
            resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;
            
        default:
            printf("Erro a não escolher um dos atributos mostrado no menu.");
            break;
        }

        

        

        break;
    case 4: // Pontos turísticos
        
        printf("\nParabens escolheu o primeiro atributo, agora escolha o segundo atributo para se fazer a comparação");
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. população\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade demográfica\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) // (Pontos turísticos)    /  segunda opção
        {
        case 1://area // (Pontos turísticos)    /  segunda opção

            printf("\nAtributos: População e qtdPontosTuristicos\n");
            printf("%s: %d , %d  \n", nomeDaCidade1, populacao1, qtdPontosTuristicos1);
            printf("%s: %d , %d  \n", nomeDaCidade2, populacao2, qtdPontosTuristicos2);

            

            //A soma do resultado da qtdPontosTuristicos
            resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2)  ? 1 : 0 ;
            resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

            //A soma do resultado da populacão
            resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
            resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }


            break;

        case 2://pib // (Pontos turísticos)    /  segunda opção
            
            printf("\nAtributos: areaKm e qtdPontosTuristicos\n");
            printf("%s: %.2f  , %d  \n", nomeDaCidade1, areaKm1, qtdPontosTuristicos1);
            printf("%s: %.2f  , %d  \n", nomeDaCidade2, areaKm2, qtdPontosTuristicos2);

            //A soma do resultado da pib
            resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2)  ? 1 : 0 ;
            resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

            //A soma do resultado da areakm
            resultado1 += (areaKm1 > areaKm2) ? 1 : 0 ;
            resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;


            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;
        
        case 3: //Pontos turísticos // (Pontos turísticos)    /  segunda opção

            printf("\nAtributos: pib e Pontos turísticos\n");
            printf("%s: %.2f  , %d \n", nomeDaCidade1, pib1, qtdPontosTuristicos1);
            printf("%s: %.2f  , %d \n", nomeDaCidade2, pib2, qtdPontosTuristicos2);

            //A soma do resultado da areakm
            resultado1 += (pib1 > pib2) ? 1 : 0 ;
            resultado2 += (pib2 > pib1) ? 1 : 0 ;

            //A soma do resultado da pontos turisticos
            resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2)  ? 1 : 0 ;
            resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;

        case 4: // Densidade demográfica // (Pontos turísticos)    /  segunda opção
            
            printf("\nAtributos: pib e Densidade demográfica\n");
            printf("%s: %d  , %.2f  \n", nomeDaCidade1, qtdPontosTuristicos1, densidadePopulacional1);
            printf("%s: %d  , %.2f  \n", nomeDaCidade2, qtdPontosTuristicos2, densidadePopulacional2);

            //A soma do resultado da areakm
            resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2) ? 1 : 0 ;
            resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

            //A soma do resultado da Densidade demográfica
            resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
            resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

            //resultado
            if(resultado1 < resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 < resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;
            
        default:
            printf("Erro a não escolher um dos atributos mostrado no menu.");
            break;
        }

        

        

        break;
    case 5: // Densidade demográfica
        
        printf("\nParabens escolheu o primeiro atributo, agora escolha o segundo atributo para se fazer a comparação");
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. população\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. pontos turisticos\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) // (Densidade demográfica)    /  segunda opção
        {
        case 1://area // (Densidade demográfica)    /  segunda opção

            printf("\nAtributos: População e densidadePopulacional\n");
            printf("%s: %d , %d  \n", nomeDaCidade1, populacao1, densidadePopulacional1);
            printf("%s: %d , %d  \n", nomeDaCidade2, populacao2, densidadePopulacional2);

            

            //A soma do resultado da densidadePopulacional
            resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
            resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

            //A soma do resultado da populacão
            resultado1 += (populacao1 > populacao2) ? 1 : 0 ;
            resultado2 += (populacao2 > populacao1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }


            break;

        case 2://pib // (Densidade demográfica)    /  segunda opção
            
            printf("\nAtributos: areaKm e densidadePopulacional\n");
            printf("%s: %.2f  , %d  \n", nomeDaCidade1, areaKm1, densidadePopulacional1);
            printf("%s: %.2f  , %d  \n", nomeDaCidade2, areaKm2, densidadePopulacional2);

            //A soma do resultado da pib
            resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
            resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

            //A soma do resultado da areakm
            resultado1 += (areaKm1 > areaKm2) ? 1 : 0 ;
            resultado2 += (areaKm2 > areaKm1) ? 1 : 0 ;


            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;
        
        case 3: //Pontos turísticos // (Densidade demográfica)    /  segunda opção

            printf("\nAtributos: pib e Pontos turísticos\n");
            printf("%s: %.2f  , %d \n", nomeDaCidade1, pib1, densidadePopulacional1);
            printf("%s: %.2f  , %d \n", nomeDaCidade2, pib2, densidadePopulacional2);

            //A soma do resultado da areakm
            resultado1 += (pib1 > pib2) ? 1 : 0 ;
            resultado2 += (pib2 > pib1) ? 1 : 0 ;

            //A soma do resultado da pontos turisticos
            resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
            resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

            //resultado
            if(resultado1 > resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 > resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;

        case 4: // Densidade demográfica // (Densidade demográfica)    /  segunda opção
            
            printf("\nAtributos: pib e Densidade demográfica\n");
            printf("%s: %d  , %.2f  \n", nomeDaCidade1, qtdPontosTuristicos1, densidadePopulacional1);
            printf("%s: %d  , %.2f  \n", nomeDaCidade2, qtdPontosTuristicos2, densidadePopulacional2);

            //A soma do resultado da areakm
            resultado1 += (qtdPontosTuristicos1 > qtdPontosTuristicos2) ? 1 : 0 ;
            resultado2 += (qtdPontosTuristicos2 > qtdPontosTuristicos1) ? 1 : 0 ;

            //A soma do resultado da Densidade demográfica
            resultado1 += (densidadePopulacional1 < densidadePopulacional2)  ? 1 : 0 ;
            resultado2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0 ;

            //resultado
            if(resultado1 < resultado2){
                
                printf("Resultado: %s venceu!\n", nomeDaCidade1);

            }else if (resultado2 < resultado1) {
        
                printf("Resultado: %s venceu!\n", nomeDaCidade2);
            
            } else {
            
                printf("Resultado: Empate!\n");
            
            }
            break;
            
        default:
            printf("Erro a não escolher um dos atributos mostrado no menu.");
            break;
        }

        

        

        break;
    default:
        printf("Opção inválida!\n");
        break;
    }


      

    


    return 0;
}
