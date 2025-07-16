
#include <stdio.h>

/*
Escreva um programa em C que verifique se uma matriz 3x3  ́e
simetrica.*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1,-2,4},
{-2,2,0},
{4,0,3}

};


    // Ficarando se os elementos da matriz é a igual a sua transpota

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            if(matriz[i][j] !=  matriz[j][i]){
                printf("A matriz nao e simetrica!");
                    return 0;

            }
        }

    }

        printf("A matriz e simetrica!");


    return 0;
}
