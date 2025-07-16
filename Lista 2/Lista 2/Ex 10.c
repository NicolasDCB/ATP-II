
#include <stdio.h>

/*
Escreva um programa em C que encontre o menor elemento em
uma matriz 4x4.*/

int main() {

    // Declaração e inicialização da matriz 4x4
int matriz[4][4]={
{27, 2, 3, 4},
{5, 6, 7, 8},
{9 ,10,11,12},
{13,14,15,16}

};

int menor = matriz[4][4];

    // Verificando os elementos da matriz

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){


            printf("%d ",matriz[i][j]);

            //Verificando se o elemento da matriz e menor que dentro da variavel

            if(menor >= matriz[i][j]){

            menor = matriz[i][j];

            }
        }

        printf("\n");

    }

    printf("O menor elemento da matriz: %d",menor);


    return 0;
}
