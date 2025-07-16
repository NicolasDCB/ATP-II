
#include <stdio.h>

/*
Escreva um programa em C que conte quantos elementos pares
existem em uma matriz 3x3.*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1, 2, 3},
{5, 24, 8},
{9 ,10,11}


};

int pares = 0;

    // Verificando os elementos da matriz

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){


            printf("%d ",matriz[i][j]);

            //Verificando se o elemento da matriz e par

            if(matriz[i][j]%2 == 0){

            pares++;

            }
        }

        printf("\n");

    }

    printf("\n Quantidade de elementos pares da matriz: %d",pares);


    return 0;
}
