#include <stdio.h>

/*
Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x4 e armazene o resultado em uma matriz 2x4.*/

int main() {

     // Declaração da matriz 2x3 3x4 e 2x4
int matrizA[2][3];
int matrizB[3][4];
int matrizC[2][4];
int soma =0;

  srand(time(0));

  //Atribuindo valor e exibindo a matriz original 1
        for(int i=0;i<2;i++){

               for(int j=0;j<3;j++){

            matrizA[i][j] = rand() % 10;

            printf("%d \t", matrizA[i][j]);
            }
            printf("\n");
        }

        printf("\n");

  //Atribuindo valor e exibindo a matriz original 2
        for(int i=0;i<3;i++){

               for(int j=0;j<4;j++){

            matrizB[i][j] = rand() % 10;

            printf("%d \t", matrizB[i][j]);
            }
            printf("\n");
        }

        //Multiplicando as matrizes 1 e 2

         for(int i=0;i<2;i++){

               for(int j=0;j<4;j++){

                for(int x=0;x<3;x++){
                    soma+= matrizA[i][x] * matrizB[x][j];
                }
                matrizC[i][j] = soma;
                soma=0;

            }
            printf("\n");
        }

            for(int i=0;i<2;i++){

               for(int j=0;j<4;j++){

            printf("%d \t", matrizC[i][j]);
            }
            printf("\n");
        }


 return 0;

}
