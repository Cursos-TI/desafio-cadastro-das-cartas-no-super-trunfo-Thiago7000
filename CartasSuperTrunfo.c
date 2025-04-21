#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
//cidade 1
    char estado1;
    char codigo_da_carta1[3];
    char nome_da_cidade1 [30];
    int populacao1= 3000;
    float area1= 12.500;
    float PIB1= 20.000;
    int quantidade_de_pontos_turisticos1= 12;

//cidade 2
    char estado2;
    char codigo_da_carta2[3];
    char nome_da_cidade2 [30];
    int populacao2= 300;
    float area2= 2000.22;
    float PIB2= 100.00;
    int quantidade_de_pontos_turisticos2= 3 ;

    printf ("Bem vindo ao desafio super trunfo do Thiago\n");
    printf ("o objetivo do jogo e que voce crie 2 cartas, vamos comecar criando a primeira\n");

//pedindo e recebendo as caracteriscas da primeira carta
printf ("digite uma letra de A a H\n");
scanf (" %c\n", &estado1);
printf ("letra: %c\n", estado1);

return 0;

}
