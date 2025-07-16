#include <stdio.h>

/*
Escreva um programa em C que calcule a soma dos elementos de
uma matriz 4x4.
*/

int main() {

int soma=0;

    // Declaração e inicialização da matriz 4x4
int matriz[4][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}

};
    // Somando dos elementos da matriz

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           soma = soma + matriz[i][j];
        }

    }

        // Exibindo a soma dos elementos da matriz

            printf("Soma de todos os elementos da matriz 4x4: %d",soma);


    return 0;
}
