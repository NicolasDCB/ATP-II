#include <stdio.h>

/*
Escreva um programa em C que declare e inicialize uma matriz
3x3 e imprima seus elementos.
*/

int main() {
    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}

};

    // Impressão dos elementos da matriz

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",matriz[i][j]);
        }

        printf("\n");

    }

    return 0;
}
