#include <stdio.h>

/*
Escreva um programa em C que encontre a posi ̧c ̃ao (linha e coluna)
de um elemento espec ́ıfico em uma matriz 3x3.*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1, 2, 3},
{5, 6, 7},
{9 ,10,11}

};

int i,j;
// Recebendo os valores da linha e da coluna

printf("\nDigite a linha:");
scanf("%d",&i);

printf("\nDigite a coluna:");
scanf("%d",&j);

//mostrando o valor correspondente

       printf("\nElemento correspondente: %d",matriz[i-1][j-1]);


    return 0;

}
