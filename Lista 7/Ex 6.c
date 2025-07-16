#include <stdio.h>

/*
Escreva um programa em C que calcule a diagonal principal de
uma matriz 5x5.*/

int main() {

    // Declaração e inicialização da matriz 5x5
int matriz[5][5]={
{1, 2, 3, 4, 5},
{6, 7, 8, 9, 10},
{11,12,13,14,15},
{16,17,18,19,20},
{21,22,23,24,25}

};

int soma =0;


    // Calculando os elementos da diagonal principal, sabendo que elemento da diagonal principal é i = j

    for(int i=0;i<5;i++){

            printf("%d ",matriz[i][i]);


        printf("\n");
          soma += matriz[i][i];
    }

    // Exibindo o calculo dos elementos da diagonal principal

        printf("Calculo:%d ",soma);


    return 0;
}
