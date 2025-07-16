
#include <stdio.h>

/*
Escreva um programa em C que transponha uma matriz 3x2 para
uma matriz 2x3.*/

int main() {

    // Declaração e inicialização da matriz 3x2
int matriz[2][3]={
{1,2,3},
{4,5,6}

};


    // Tranpondo os elementos da matriz

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){

            printf("%d ",matriz[j][i]);
        }

        printf("\n");

    }

    return 0;
}
