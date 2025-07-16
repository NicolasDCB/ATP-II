
#include <stdio.h>

/*
Escreva um programa em C que encontre o maior elemento em
uma matriz 3x3.*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1, 2, 3},
{5, 24, 7},
{9 ,10,11}


};

int maior = 0;
    // Verificando os elementos da matriz

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){


            printf("%d ",matriz[i][j]);

            //Verificando se o elemento da matriz e maior que dentro da variavel

            if(maior<= matriz[i][j]){

            maior = matriz[i][j];

            }
        }

        printf("\n");

    }

    printf("O maior elemento da matriz: %d",maior);


    return 0;
}
