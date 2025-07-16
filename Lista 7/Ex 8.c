
#include <stdio.h>

/*
Escreva um programa em C que realize a rotacao de uma matriz
quadrada 4x4 no sentido horario.*/

int main() {

    // Declaração e inicialização da matriz 4x4
int matriz[4][4]={
{1, 2, 3, 4},
{5, 6, 7, 8},
{9 ,10,11,12},
{13,14,15,16}

};

int matrizB[4][4];



    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){

          matrizB[j][3-i] = matriz[i][j];
        }

    }

      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){

         printf("%d \t",matrizB[i][j] );
        }
      printf("\n");
    }




    return 0;
}
