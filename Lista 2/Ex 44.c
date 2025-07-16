#include <stdio.h>

/*
Escreva um programa em C que calcule a soma dos elementos
abaixo da diagonal principal de uma matriz 4x4.*/

int main() {

     // Declaração da matriz 5x5
  int matriz[4][4];
  srand(time(0));
  int soma=0;

  //Atribuindo valor e exibindo a matriz original
        for(int i=0;i<4;i++){

               for(int j=0;j<4;j++){

            matriz[i][j] = rand() % 10;

            printf("%d \t", matriz[i][j]);

            if(i==j){
                for(int x=1;x<3-i;x++){
                 soma+= matriz[i+x][j];
                }
                }
            }
            printf("\n");
        }


   // Somando os elementos da matriz abaixo da diagonal principal
   printf("\n A soma dos elementos abaixo da diagonal principal: %d",soma);





    return 0;

}
