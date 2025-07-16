 #include <stdio.h>

/*
Escreva um programa em C que calcule a transposta de uma
matriz 3x4. */

int main() {

    // Declaração da matriz 4x4
int matriz[3][4],matrizt[4][3];
  srand(time(0));

    // Declarando e Exibindo a matriz 3x4


              for(int i=0;i<3;i++){

                   for (int j=0;j<4;j++){

                      matriz[i][j] = rand() % 10    ;

                  printf("%d \t",matriz[i][j]);

                }
                printf("\n");
            }

                            printf("\n");
         printf("Matriz transposta:\n");

             for(int i=0;i<4;i++){

                   for (int j=0;j<3;j++){

                      matrizt[i][j] = matriz[j][i];

                  printf("%d \t",matrizt[i][j]);

                }
                printf("\n");
            }





    return 0;
}
