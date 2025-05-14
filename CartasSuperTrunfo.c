#include <stdio.h>

int main (){
    
//cidade 1
char letra1;
char numero1 [3];
char nome_cidade1 [20];
float area1;
int populacao1;
float pib1;
int pontos_turisticos1;


//cidade 2
char letra2;
char numero2 [3];
char nome_cidade2 [20];
float area2;
int populacao2;
float pib2;
int pontos_turisticos2;


printf ("bem vindo ao jogo super trunfo\n");
printf ("o objetivo do jogo e voce criar 2 cartas com nome de uma cidade que voce desejar\n");
printf  ("e voce tambem escolhera as caracteristicas de cada carta\n");
printf ("crie sua primeira carta agora, vamos la!\n");

//LEITURA DA CARTA 1
//leitura da letra
printf ("digite uma letra entre A e H\n");
scanf (" %c", &letra1);


//leitura do numero
printf ("digite um numero entre 01 e 04\n");
scanf ("%s", numero1);


//leitura da cidade 
printf ("digite o nome da sua primeira cidade\n");
scanf ("%s", nome_cidade1);


//leitura da populacao
printf  ("digite o numero de habitantes em sua cidade\n");
scanf ("%d", &populacao1);


//leitura da area
printf ("digite a area da sua cidade, (a area esta em km²)\n");
scanf ("%f", &area1);


//leitura do PIB
printf ("digite o PIB da sua cidade\n");
scanf ("%f", &pib1);


//leitura do ponto turistico
printf ("digite a quantidade de pontos turisticos de sua cidade\n");
scanf ("%d", &pontos_turisticos1);


//LEITURA DA CARTA 2
printf("agora crie sua segunda carta!\n");

//leitura da letra
printf ("digite uma letra entre A e H\n");
scanf (" %c", &letra2);

//leitura do numero
printf ("digite um numero entre 01 e 04\n");
scanf ("%s", numero2);


//leitura da cidade 
printf ("digite o nome da sua segunda cidade\n");
scanf ("%s", nome_cidade2);


//leitura da populacao
printf  ("digite o numero de habitantes em sua segunda cidade\n");
scanf ("%d",&populacao2);

//leitura da area
printf ("digite a area da sua cidade\n");
scanf ("%f", &area2);

//leitura do PIB
printf ("digite o PIB da sua cidade\n");
scanf ("%f", &pib2);


//leitura do ponto turistico
printf ("digite a quantidade de pontos turisticos de sua cidade\n");
scanf ("%d", &pontos_turisticos2);



//Calculos da densidade e PIB per capita, (CARTA 1) 
float densidade_populacional1 = (float) populacao1/area1;
double pib_per_capita1 = (double) pib1 * 1000000000.0/ (float) populacao1;

//Calculo super poder, (CARTA 1) 
float super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + 
                                        pib_per_capita1 + 1/densidade_populacional1;     

//EXIBINDO DADOS DA CARTA 1
printf ("CARTA 1\n");
printf ("Estado: %c\n", letra1);
printf("Codigo da cidade: %c%s\n",letra1,numero1);
printf ("Nome da cidade: %s\n", nome_cidade1);
printf ("Populacao: %d\n", populacao1);
printf ("Area: %.2f km²\n", area1);
printf ("PIB: %.2f bilhoes de reais\n", pib1);
printf ("Numero de pontos turisticos: %d\n", pontos_turisticos1);
printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional1 );
printf ("Pib per capita: %.2f reais\n", pib_per_capita1);
printf ("Super poder: %f\n", super_poder1);

//Calculos da densidade e PIB per capita, (CARTA 2)
float densidade_populacional2 = (float) populacao2/area2;
double pib_per_capita2 = (double) pib2 * 1000000000.0/ (float) populacao2;


//Calculo super poder, (CARTA 2) 
float super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + 
                                        pib_per_capita2 + 1/densidade_populacional2;     



//EXIBINDO DADOS DA CARTA 2
printf ("CARTA 2\n");
printf ("Estado: %c\n", letra2);
printf("Codigo da cidade: %c%s\n",letra2,numero2);
printf ("Nome da cidade: %s\n", nome_cidade2);
printf ("Populacao: %d\n", populacao2);
printf ("Area: %.2f km²\n", area2);
printf ("PIB: %.2f bilhoes de reais\n", pib2);
printf ("Numero de pontos turisticos: %d\n", pontos_turisticos2);
printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional2 );
printf ("Pib per capita: %.2f reais\n", pib_per_capita2);
printf ("Super poder: %f\n", super_poder2);




//COMPARAÇÃO DAS CARTAS
float comparacao_populacao = populacao1 > populacao2;
float comparacao_area = area1 > area2;
float comparacao_pib = pib1 > pib2;
float comparacao_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
float comparacao_densidade = densidade_populacional1 < densidade_populacional2;
float comparacao_pib_per_capita = pib_per_capita1 > pib_per_capita2;
float comparacao_super_poder = super_poder1 > super_poder2;



//EXIBINDO COMPARAÇÃO 

printf ("Comparacao de Cartas:\n");
printf ("Populacao: Carta 1 venceu (.0%f)\n", comparacao_populacao);
printf ("Area: Carta 1 venceu (.0%f)\n", comparacao_area);
printf ("PIB: Carta 1 venceu (.0%f)\n", comparacao_pib);
printf ("Pontos Turisticos: Carta 1 venceu (.0%f)\n", comparacao_pontos_turisticos);
printf ("Densidade Populacional: Carta 1 venceu (.0%f)\n", comparacao_densidade);
printf ("PIB per Capita: Carta 1 venceu (.0%f)\n", comparacao_pib_per_capita);
printf ("Super Poder: Carta 1 venceu (.0%f)\n", comparacao_super_poder);





return 0;

}