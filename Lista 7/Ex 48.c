 #include <stdio.h>

/*
Escreva um programa em C que preencha uma matriz 4x4 com
n ́umeros aleat ́orios e depois calcule a m ́edia dos elementos acima da diagonal
principal. */

int main() {

    // Declaração da matriz 4x4
int matriz[4][4];
  srand(time(0));

float media;
    // Declarando e Exibindo a matriz 4x4


              for(int i=0;i<4;i++){

                   for (int j=0;j<4;j++){

                      matriz[i][j] = rand() % 10    ;

                  printf("%d \t",matriz[i][j]);

                }
                printf("\n");
            }

             for(int i=0;i<4;i++){

                   for (int j=3;j>i;j--){
                    media += matriz[i][j];
                }
            }

                printf("\nMedia dos elementos acima da diagonal principal:%.2f",media/6);



    return 0;
}
