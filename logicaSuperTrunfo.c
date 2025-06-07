#include <stdio.h>

//Teste ELIEZER 

int main() {

    int numero1 = 1, numero2 = 2,  pontoturistico1, pontoturistico2, 
    pontosCarta1=0, pontosCarta2=0, primeiroAtributo, segundoAtributo, resultado1, resultado2;
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

 // Escolha do primeiro atributo a comparar

    printf("\nBem vindo ao jogo!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super poder\n");

    // Escolha do segundo atributo a comparar

    printf("Escolha o atributo a comparar: \n");
    scanf (" %d", &primeiroAtributo);

    printf("\nEscolha o segundo atributo:\n");
    (primeiroAtributo == 1) ? 0 : printf ("1. População1\n");
    primeiroAtributo==2?0 :printf("2. Área\n");
    primeiroAtributo==3?0 :printf("3. Pib\n");
    primeiroAtributo==4?0 :printf("4. Número de Pontos Turísticos\n");
    primeiroAtributo==5?0 :printf("5. Densidade Populacional\n");
    primeiroAtributo==6?0 :printf("6. PIB per Capita\n");
    primeiroAtributo==7?0 :printf("7. Super poder\n");


    printf("Escolha o segundo atributo a comparar: \n");
    scanf (" %d", &segundoAtributo);
    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atriburo!");            
    }
    else
    {

        switch (primeiroAtributo)
        {
        case 1:
            printf("%s x %s\n\n",pais1,pais2);
            printf("Você escolheu para comparar a população\n");
            printf ("%s a população é de: %lu \n", pais1, populacao1);
            printf ("%s a população é de:: %lu \n", pais2, populacao2);
            resultado1 = populacao1>populacao2? 1 : 0; 
            resultado1 = populacao1 == populacao2? 10 : resultado1;      
        break;
        case 2: 
            printf("%s x %s\n\n",pais1,pais2);
            printf("Você escolheu para comparar a área\n");
            printf ("Área do %s é de:  %.2fkm² \n", pais1 ,area1);
            printf ("Área do %s é de:  %.2fkm²  \n", pais2, area2);             
            resultado1 = area1>area2? 1 : 0;
            resultado1 = area1 == area2? 10 : resultado1;       
        break;
        case 3:
            printf("%s x %s\n\n",pais1,pais2);
            printf("Você escolheu para comparar PIB\n");
            printf (" %s o PIB é de : %.2f bilhões de reais \n", pais1, pib1);
            printf (" %s o PIB é de : %.2f bilhões de reais \n", pais2, pib2);             
            resultado1 = pib1>pib2? 1 : 0;       
            resultado1 = pib1 == pib2? 10 : resultado1;
        break;
        case 4:
            printf("%s x %s\n\n",pais1,pais2);
            printf (" %s tem  %d pontos turísticos \n", pais1, pontoturistico1);
            printf (" %s tem  %d pontos turísticos \n", pais2, pontoturistico2); 
            printf("Você escolheu para comparar os pontos turísticos\n");
            resultado1 = pontoturistico1>pontoturistico2? 1 : 0;   
            resultado1 = pontoturistico1 == pontoturistico2? 10 : resultado1;    
        break;
        case 5:
            printf("%s x %s\n\n",pais1,pais2);
            printf("Você escolheu para comparar a densidade demográfica\n");
            printf ("%s  - a densidade demográfica é de %.2f hab/km² \n", pais1, densidadedemografica1);
            printf ("%s  - a densidade demográfica é de %.2f hab/km² \n", pais2, densidadedemografica2);
            resultado1 = densidadedemografica1<densidadedemografica2? 1 : 0;
            resultado1 = densidadedemografica1 == densidadedemografica2? 10 : resultado1;       
        break;
        case 6:
            printf("%s x %s\n\n",pais1,pais2);
            printf (" %s o PIB percapita é de: %.2f reais \n", pais1, PIBpercapita1);
            printf (" %s o PIB percapita é de: %.2f reais \n", pais2, PIBpercapita2);
            printf("Você escolheu para comparar o PIB percapita\n");
            resultado1 = PIBpercapita1>PIBpercapita2? 1 : 0;       
            resultado1 = PIBpercapita1 == PIBpercapita2? 10 : resultado1;
        break;
        case 7:
            printf("%s x %s\n\n",pais1,pais2);
            printf("Você escolheu para comparar o super poder\n");
            printf (" %s tem um super poder de: %.2f  \n", pais1, SuperPoder1);
            printf (" %s tem um super poder de: %.2f  \n", pais2, SuperPoder2);
            resultado1 = SuperPoder1>SuperPoder2? 1 : 0;       
            resultado1 = SuperPoder1 == SuperPoder2? 10 : resultado1;
        break;
        default:
            printf("Opção de jogo invalida - \n");
        break;
        }


        switch (segundoAtributo)
        {
        case 1:
            printf("Você escolheu para comparar a população\n");
            printf ("%s a população é de: %lu \n", pais1, populacao1);
            printf ("%s a população é de:: %lu \n", pais2, populacao2);
            resultado2 = populacao1>populacao2? 1 : 0;   
            resultado2 = populacao1 == populacao2? 10 : resultado2;    
        break;
        case 2: 
            printf("Você escolheu para comparar a área\n");
            printf ("Área do %s é de:  %.2fkm² \n", pais1 ,area1);
            printf ("Área do %s é de:  %.2fkm²  \n", pais2, area2);             
            resultado2 = area1>area2? 1 : 0;    
            resultado2 = area1 == area2? 10 : resultado2;   
        break;
        case 3:
            printf("Você escolheu para comparar PIB\n");
            printf (" %s o PIB é de : %.2f bilhões de reais \n", pais1, pib1);
            printf (" %s o PIB é de : %.2f bilhões de reais \n", pais2, pib2);             
            resultado2 = pib1>pib2? 1 : 0;   
            resultado2 = pib1 == pib2? 10 : resultado2;    
        break;
        case 4:
            printf("%s x %s\n",pais1,pais2);
            printf (" %s tem  %d pontos turísticos \n", pais1, pontoturistico1);
            printf (" %s tem  %d pontos turísticos \n", pais2, pontoturistico2); 
            printf("Você escolheu para comparar os pontos turísticos\n");
            resultado2 = pontoturistico1>pontoturistico2? 1 : 0;   
            resultado2 = pontoturistico1 == pontoturistico2? 10 : resultado2;    
        break;
        case 5:
            printf("Você escolheu para comparar a densidade demográfica\n");
            printf ("%s  - a densidade demográfica é de %.2f hab/km² \n", pais1, densidadedemografica1);
            printf ("%s  - a densidade demográfica é de %.2f hab/km² \n", pais2, densidadedemografica2);
            resultado2 = densidadedemografica1<densidadedemografica2? 1 : 0;   
            resultado2 = densidadedemografica1 == densidadedemografica2? 10 : resultado2;     
        break;
        case 6:
            printf (" %s o PIB percapita é de: %.2f reais \n", pais1, PIBpercapita1);
            printf (" %s o PIB percapita é de: %.2f reais \n", pais2, PIBpercapita2);
            printf("Você escolheu para comparar o PIB percapita\n");
            resultado2 = PIBpercapita1>PIBpercapita2? 1 : 0;    
            resultado2 = PIBpercapita1 == PIBpercapita2? 10 : resultado2;   
        break;
        case 7:
            printf("Você escolheu para comparar o super poder\n");
            printf (" %s tem um super poder de: %.2f  \n", pais1, SuperPoder1);
            printf (" %s tem um super poder de: %.2f  \n", pais2, SuperPoder2);
            resultado2 = SuperPoder1>SuperPoder2? 1 : 0;   
            resultado2 = SuperPoder1 == SuperPoder2? 10 : resultado2;    
        break;
        default:
            printf("Opção de jogo invalida - \n");
        break;
        }
        if (resultado1 + resultado2 == 2 || resultado1 + resultado2 == 11 )
        {
            printf("!!! O %s ganhou !!!\n\n",pais1);
        }
        else if (resultado1 + resultado2 == 0 || resultado1 + resultado2 == 10)
        {
            printf("!!! O %s ganhou !!!\n\n,",pais2);
        }
        else
        {
            printf("Houve Empate!!!\n\n");
        }
    }
printf ("resultado1 %d", resultado1);
printf ("resultado2 %d",resultado2);


return 0;

}
