#include <stdio.h>

/*
Escreva um programa em C que calcule a media dos elementos de
uma matriz 2x4.*/

int main() {

    // Declaração e inicialização da matriz 2x4
int matriz[2][4]={
{27, 2, 3, 4},
{5, 6, 7, 8},

};

float media=0;

    // Rodando os elementos da matriz

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){


            printf("%d \t",matriz[i][j]);

            //Somando os elementos da matriz
               media += matriz[i][j];
        }

        printf("\n");

    }

    // Exibindo a media
    printf("A media dos elementos da matriz: %.2f",media/8);


    return 0;
}
