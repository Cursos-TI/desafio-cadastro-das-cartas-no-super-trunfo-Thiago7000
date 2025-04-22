#include <stdio.h>

int main() {

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


//EXIBINDO DADOS DA CIDADE 1
printf ("CARTA 1\n");
printf ("Estado: %c\n", letra1);
printf("Codigo da cidade: %c%s\n",letra1,numero1);
printf ("Nome da cidade: %s\n", nome_cidade1);
printf ("Populacao: %d\n", populacao1);
printf ("Area: %.2f km²\n", area1);
printf ("PIB: %.2f bilhoes de reais\n", pib1);
printf ("Numero de pontos turisticos: %d\n", pontos_turisticos1);


//EXIBINDO DADOS DA CIDADE 2
printf ("CARTA 2\n");
printf ("Estado: %c\n", letra2);
printf("Codigo da cidade: %c%s\n",letra2,numero2);
printf ("Nome da cidade: %s\n", nome_cidade2);
printf ("Populacao: %d\n", populacao2);
printf ("Area: %.2f km²\n", area2);
printf ("PIB: %.2f bilhoes de reais\n", pib2);
printf ("Numero de pontos turisticos: %d\n", pontos_turisticos2);

return 0;




}
