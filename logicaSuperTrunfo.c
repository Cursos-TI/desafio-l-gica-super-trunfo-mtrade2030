#include <stdio.h>

//Teste ELIEZER 

int main() {

    int numero1 = 1, numero2 = 2,  pontoturistico1, pontoturistico2, pontosCarta1=0, pontosCarta2=0;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    char codigo1[4], codigo2[4], cidadeNum1[50], cidadeNum2[50];
    char estado1[4], estado2[4];

    //Coleta de dados da carta 1
    printf("\n---Digite os dados da carta %d ---\n\n", numero1);


    printf("Estado (A-H):");
    scanf(" %s", estado1);
 
    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidadeNum1);  


    printf("População:");
    scanf("%lu", &populacao1);    

    printf("Área (em km²):");
    scanf("%f", &area1); 

    printf("Pib (em bilhões de reais):");
    scanf("%f", &pib1);   
 
    printf("Número de Pontos Turisticos:");
    scanf("%d", &pontoturistico1);

    //Coleta de dados da carta 2
    printf("\n---Digite os dados da carta %d ---\n\n", numero2);


    printf("Estado (A-H):");
    scanf(" %s", estado2);
 
    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidadeNum2);  


    printf("População:");
    scanf("%lu", &populacao2);    

    printf("Área (em km²):");
    scanf("%f", &area2); 

    printf("Pib (em bilhões de reais):");
    scanf("%f", &pib2);   
 
    printf("Número de Pontos Turisticos:");
    scanf("%d", &pontoturistico2);
    
    //****Nivel aventureiro****
    //densidade populacional = população / área da cidade
    
    //conversao explícita para float carta 1 
    float densidadepopulacional1 = (float) populacao1 / area1;

    //conversao explícita para float carta 2 
    float densidadepopulacional2 = (float) populacao2 / area2;

    
    //PIB per capita = PIB / populacao

    //conversao explícita para float carta 1 
    float PIBpercapita1 = (float) (pib1 *1000000000) / populacao1;

    //conversao explícita para float carta 2 
    float PIBpercapita2 = (float) (pib2 *1000000000) / populacao2;

    double SuperPoder1 = (double) populacao1 + area1 + pib1 + pontoturistico1 + PIBpercapita1  + 1 / densidadepopulacional1;  //mestre
    double SuperPoder2 = (double) populacao2 + area2 + pib2 + pontoturistico2 + PIBpercapita2  + 1 / densidadepopulacional2; //mestre


    printf("\n***Desafio Super Trunfo - Países***\n");

    //Exibir as informações da carta 1
    printf ("\nCarta %d\n", numero1);
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidadeNum1);
    printf ("População: %lu \n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("Pib: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita1);
    printf ("Super poder 1: %.2lf\n", SuperPoder1); 

    //Exibir as informações da carta 2
    printf ("\nCarta %d\n", numero2);
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidadeNum2);
    printf ("População: %lu \n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("Pib: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf ("Super poder 2: %.2lf\n", SuperPoder2);

//Comparaçoes

    printf("\n****COMPARAÇÃO DAS CARTAS****");

    // Comparar a população
    printf("\n\n-> Atributo: População\n");

    printf ("Carta 1 -  %s (%s): %lu \n", cidadeNum1, estado1, populacao1);
    printf ("Carta 2 -  %s (%s): %lu \n", cidadeNum2, estado2, populacao2);


     if (populacao1 > populacao2) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }

    // Comparar a Área
    printf("\n\n-> Atributo: Área\n");

    printf ("Carta 1 -  %s (%s): %.2fkm² \n", cidadeNum1, estado1, area1);
    printf ("Carta 2 -  %s (%s): %.2fkm² \n", cidadeNum2, estado2, area2);


     if (area1 > area2) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }

    // Comparar a PIB
    printf("\n\n-> Atributo: PIB\n");

    printf ("Carta 1 -  %s (%s): %.2f bilhões de reais \n", cidadeNum1, estado1, pib1);
    printf ("Carta 2 -  %s (%s): %.2f bilhões de reais \n", cidadeNum2, estado2, pib2);


     if (pib1 > pib2) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }    

    // Comparar a Pontos turísticos
    printf("\n\n-> Atributo: Pontos turísticos\n");

    printf ("Carta 1 -  %s (%s): %d \n", cidadeNum1, estado1, pontoturistico1);
    printf ("Carta 2 -  %s (%s): %d \n", cidadeNum2, estado2, pontoturistico2);


     if (pontoturistico1 > pontoturistico2) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }  

// Comparar a Densidade Populacional
    printf("\n\n-> Atributo: Densidade Populacional\n");

    printf ("Carta 1 -  %s (%s): %.2f hab/km² \n", cidadeNum1, estado1, densidadepopulacional1);
    printf ("Carta 2 -  %s (%s): %.2f hab/km² \n", cidadeNum2, estado2, densidadepopulacional2);


     if (densidadepopulacional2 > densidadepopulacional1) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }        

// Comparar a PIB per Capita
    printf("\n\n-> Atributo: PIB per Capita\n");

    printf ("Carta 1 -  %s (%s): %.2f reais \n", cidadeNum1, estado1, PIBpercapita1);
    printf ("Carta 2 -  %s (%s): %.2f reais \n", cidadeNum2, estado2, PIBpercapita2);


     if (PIBpercapita1 > PIBpercapita2) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }

// Comparar Super Poder
    printf("\n\n-> Super Poder\n");

    printf ("Carta 1 -  %s (%s): %.2f  \n", cidadeNum1, estado1, SuperPoder1);
    printf ("Carta 2 -  %s (%s): %.2f  \n", cidadeNum2, estado2, SuperPoder2);


     if (SuperPoder1 > SuperPoder2) {             //if (condicao) {
         printf("Carta 1 Venceu\n");      // bloco de código a ser executado se a condição for verdadeira
         pontosCarta1++;
        } else {
         printf("Carta 2 Venceu\n");    // bloco de código a ser executado se a condição for falsa
          pontosCarta2++;
        }


// ************************

// Comparar as Pontos das Cartas
    printf("\nCarta 1 Total de pontos: %d\n", pontosCarta1);
    printf("Carta 2 Total de pontos: %d\n", pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {             //if (condicao) {
        printf("****A cidade vencedora é:  %s (carta 1)***\n\n", cidadeNum1);      // bloco de código a ser executado se a condição for verdadeira
    } else {
        printf("****A cidade vencedora é:  %s (carta 2)***\n\n", cidadeNum2);    // bloco de código a ser executado se a condição for falsa  
    }        


 
    return 0;
}