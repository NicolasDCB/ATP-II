#include <stdio.h>

/*
Escreva um programa em C que inverta a ordem das linhas de
uma matriz 3x3.*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1, 2, 3},
{5, 6, 7},
{9 ,10,11}

};

       //declarando a matriz

      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

                //invertendo as suas linhas

         printf("%d \t",matriz[2-i][j] );
        }
      printf("\n");
    }


    return 0;

}

