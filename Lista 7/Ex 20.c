 #include <stdio.h>

/*
Escreva um programa em C que calcule a soma dos elementos
abaixo da diagonal principal de uma matriz 4x4.*/

int main() {

    // Declaração e inicialização da matriz 4x3
int matriz[4][4];
  srand(time(0));

    // Declarando e Exibindo a matriz 4x4


              for(int i=0;i<4;i++){

         for (int j=0;j<4;j++){
                matriz[i][j] = rand() % 10;
                  printf("%d \t",matriz[i][j]);
                }
                printf("\n");
            }





    return 0;
}
