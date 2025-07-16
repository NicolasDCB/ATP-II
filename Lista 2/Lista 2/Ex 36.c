#include <stdio.h>

/*
Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleat ́orios e depois ordene os elementos de cada coluna.*/

int main() {

     // Declaração da matriz 5x5
int matriz[5][5];
  srand(time(0));
int div=0;

  //Atribuindo valor e exibindo a matriz original
        for(int i=0;i<5;i++){

               for(int j=0;j<5;j++){

            matriz[i][j] = rand() % 100;

            printf("%d \t", matriz[i][j]);
            }
            printf("\n");
        }

   // Verificando os elementos da matriz ordenando

            for(int j=0;j<5;j++){

               for(int i=0;i<5;i++){

                for(int x=i+1;x<5;x++){
                    if(matriz[i][j]>matriz[x][j]){
                        int temp = matriz[i][j];
                        matriz[i][j] = matriz[x][j];
                        matriz[x][j] = temp;
                    }
                }
            }
            printf("\n");
        }

            //Exibindo a nova matriz
            for(int i=0;i<5;i++){

               for(int j=0;j<5;j++){

            printf("%d \t", matriz[i][j]);
            }
            printf("\n");
        }



    return 0;

}
