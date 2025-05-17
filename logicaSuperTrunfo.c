#include <stdio.h>

//Teste ELIEZER 

int main() {

    int numero1 = 1, numero2 = 2,  pontoturistico1, pontoturistico2, pontosCarta1=0, pontosCarta2=0, opcao;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    char pais1[50], pais2[50];

    //Coleta de dados da carta 1
    printf("\n---Digite os dados da carta %d ---\n\n", numero1);


    printf("País:");
    scanf(" %s", pais1);

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


    printf("País:");
    scanf(" %s", pais2);

    printf("População:");
    scanf("%lu", &populacao2);    

    printf("Área (em km²):");
    scanf("%f", &area2); 

    printf("Pib (em bilhões de reais):");
    scanf("%f", &pib2);   
 
    printf("Número de Pontos Turisticos:");
    scanf("%d", &pontoturistico2);
    
    //densidade populacional = população / área da cidade
    
    //conversao explícita para float carta 1 
    float densidadedemografica1 = (float) populacao1 / area1;

    //conversao explícita para float carta 2 
    float densidadedemografica2 = (float) populacao2 / area2;
    
    //PIB per capita = PIB / populacao

    //conversao explícita para float carta 1 
    float PIBpercapita1 = (float) (pib1 *1000000000) / populacao1;

    //conversao explícita para float carta 2 
    float PIBpercapita2 = (float) (pib2 *1000000000) / populacao2;

    double SuperPoder1 = (double) populacao1 + area1 + pib1 + pontoturistico1 + PIBpercapita1  + 1 / densidadedemografica1;  //mestre
    double SuperPoder2 = (double) populacao2 + area2 + pib2 + pontoturistico2 + PIBpercapita2  + 1 / densidadedemografica2; //mestre


    printf("\n***Desafio Super Trunfo - Países***\n");

    //Exibir as informações da carta 1
    printf ("\nCarta %d\n", numero1);
    printf ("País: %s\n", pais1);
    printf ("População: %lu \n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("Pib: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico1);
    printf ("Densidade Demográfica: %.2f hab/km²\n", densidadedemografica1);
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita1);
    printf ("Super poder 1: %.2lf\n", SuperPoder1); 

    //Exibir as informações da carta 2
    printf ("\nCarta %d\n", numero2);
    printf ("País: %s\n", pais2);
    printf ("População: %lu \n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("Pib: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico2);
    printf ("Densidade Demográfica: %.2f hab/km²\n", densidadedemografica2);
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf ("Super poder 2: %.2lf\n", SuperPoder2);
  

 // Menu de escolha

    printf("\nJogo Super Trunfo\n\n");

    printf("Escolha o atributo para Comparar:\n");
    printf("1. Populaçao\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per capita\n");
    printf("Escolha: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
 //compara populacao
        case 1:
        printf("Você escolheu para comparar a população\n");
        printf ("Carta 1 -  %s : %lu \n", pais1, populacao1);
        printf ("Carta 2 -  %s : %lu \n", pais2, populacao2);        
    if (populacao1 == populacao2)
    {
        printf("### Empate! ###\n");
    } else if ( populacao1 > populacao2)
    {
        printf ("### Carta 1 venceu!!\n");
    } else {
        printf("### Carta 2 venceu!!\n");
    }
        break;
 //compara área        
    case 2:
        printf("Você escolheu para comparar a área\n");
        printf ("Carta 1 -  %s : %.2fkm² \n", pais1 ,area1);
        printf ("Carta 2 -  %s : %.2fkm² \n", pais2, area2);        
    if (area1 == area2)
    {
        printf("### Empate! ###\n");
    } else if ( area1 > area2)
    {
        printf ("### Carta 1 venceu!!\n");
    } else {
        printf("### Carta 2 venceu!!\n");
    }        
        break;
 //comparar o PIB       
    case 3:
        printf("Você escolheu para comparar o PIB\n");
        printf ("Carta 1 -  %s : %.2f bilhões de reais \n", pais1, pib1);
        printf ("Carta 2 -  %s : %.2f bilhões de reais \n", pais2, pib2);       
    if (pib1 == pib2)
    {
        printf("### Empate! ###\n");
    } else if ( pib1 > pib2)
    {
        printf ("### Carta 1 venceu!!\n");
    } else {
        printf("### Carta 2 venceu!!\n");
    }
        break;
 //comparar os pontos turisticos   
    case 4:
        printf("Você escolheu para comparar o Número de pontos turisticos\n");
        printf ("Carta 1 -  %s : %d \n", pais1, pontoturistico1);
        printf ("Carta 2 -  %s : %d \n", pais2, pontoturistico2);        
    if (pontoturistico1 == pontoturistico2)
    {
        printf("### Empate! ###\n");
    } else if ( pontoturistico1 > pontoturistico2)
    {
        printf ("### Carta 1 venceu!!\n");
    } else {
        printf("### Carta 2 venceu!!\n");
    }
        break;
 // comparar a densidade demografica   
    case 5:
        printf("Você escolheu para comparar o Densidade Demográfica\n");
        printf ("Carta 1 -  %s : %.2f hab/km² \n", pais1, densidadedemografica1);
        printf ("Carta 2 -  %s : %.2f hab/km² \n", pais2, densidadedemografica2);        
    if (densidadedemografica1 == densidadedemografica2)
    {
        printf("### Empate! ###\n");
    } else if ( densidadedemografica2 > densidadedemografica1)
    {
        printf ("### Carta 1 venceu!!\n");
    } else {
        printf("### Carta 2 venceu!!\n");
    }
        break;
 // comparar a renda per capita
    case 6:
        printf("Você escolheu para comparar o PIB per capita\n");
        printf ("Carta 1 -  %s : %.2f reais \n", pais1, PIBpercapita1);
        printf ("Carta 2 -  %s : %.2f reais \n", pais2, PIBpercapita2);        
    if (PIBpercapita1 == PIBpercapita2)
    {
        printf("### Empate! ###\n");
    } else if ( PIBpercapita1 > PIBpercapita2)
    {
        printf ("### Carta 1 venceu!!\n");
    } else {
        printf("### Carta 2 venceu!!\n");
    }
        break;

    default:
        printf("Opção invalida - ");
        break;
    }

    return 0;
}