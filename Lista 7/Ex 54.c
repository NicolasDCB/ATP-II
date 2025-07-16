 #include <stdio.h>

/*
Escreva um programa em C que calcule a soma dos elementos de
uma diagonal qualquer em uma matriz 4x4.
principal. */

int main() {

    // Declaração da matriz 4x4
int matriz[4][4];
  srand(time(0));

int soma=0,coluna;
    // Declarando e Exibindo a matriz 4x4


              for(int i=0;i<4;i++){

                   for (int j=0;j<4;j++){

                      matriz[i][j] = rand() % 16    ;

                  printf("%d \t",matriz[i][j]);

                }
                printf("\n");
            }

            printf("\nEscolha uma coluna para ser somada:");
            scanf("%d",&coluna);


              for(int i=0;i<4;i++){

                   soma += matriz[i][coluna-1];
            }

            printf("\nA soma dos elementos da %d coluna:%d",coluna,soma);



    return 0;
}
