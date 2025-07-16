#include <stdio.h>

/*
Escreva um programa em C que copie os elementos de uma matriz
3x3 para outra matriz..*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1, 2, 3},
{5, 6, 7},
{9 ,10,11}

};

int matriz_copia[3][3];



    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

          matriz_copia[i][j] = matriz[i][j];
        }

    }

      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

         printf("%d \t",matriz_copia[i][j] );
        }
      printf("\n");
    }




    return 0;
}
