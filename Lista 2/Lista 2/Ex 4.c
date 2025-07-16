// c(i,j) = a(i,j) * b(i,j) + a(i,j+1) * b(i,j+1)

#include <stdio.h>

/*
Escreva um programa em C que multiplique duas matrizes 3x3.
*/

int main() {
    // Declaração e inicialização da primeira matriz 3x3
int matrizA[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}

};

  // Declaração e inicialização da segunda matriz 3x3
int matrizB[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}

};

  // Declaração da matriz 3x3 que vai armazenar a multiplicação
int matrizC[3][3];


    // Multiplicando os elementos da matriz

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

        matrizC[i][j] = matrizA[i][j] * matrizB[i][j] +  matrizA[i][j+1] * matrizB[i+1][j] +  matrizA[i][j+2] * matrizB[i+2][j];

            printf("%d ",matrizC[i][j]);
        }

        printf("\n");

    }

    return 0;
}
