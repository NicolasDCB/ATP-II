#include <stdio.h>

/*
Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Hankel.*/

int main() {

     // Declaração da matriz 3x3
int matriz[3][3]={
{1,2,3},
{2,3,0},
{3,0,0}

};
  srand(time(0));
int div=0;

  //Atribuindo valor e exibindo a matriz original
        for(int i=0;i<3;i++){

               for(int j=0;j<3;j++){

            printf("%d \t", matriz[i][j]);
            }
            printf("\n");
        }

   // Verificando os elementos da matriz sabendo que uma matriz de Hankel e é uma matriz quadrada na qual cada
   //diagonal inclinada ascendente da esquerda para a direita é constante.

        for(int i=0;i<1;i++){

               for(int j=0;j<1;j++){

                   for(int x=0;x<3;x++){

                    if(matriz[i][j]>matriz[i][x]){
                    printf("Nao e uma matriz de Hanekl");
                    return 0;
                   }

                   if(matriz[i][j]>matriz[x][i]){
                    printf("Nao e uma matriz de Hanekl");
                    return 0;
                   }

            }
            printf("\n");
        }


        printf("A matriz em questao e uma matriz de hankel");



    return 0;

}

}


