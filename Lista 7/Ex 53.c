 #include <stdio.h>

/*
Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleatorios e depois encontre o segundo menor elemento. */

int main() {

    // Declaração da matriz 5x5
int matriz[5][5];
  srand(time(0));


    // Declarando e Exibindo a matriz 5x5


              for(int i=0;i<5;i++){

                   for (int j=0;j<5;j++){

                      matriz[i][j] = rand() % 25;


                  printf("%d \t",matriz[i][j]);

                }
                printf("\n");
            }

        int menor = matriz[1][1], segundo=matriz[1][1] + 1;
             for(int i=0;i<5;i++){

                   for (int j=0;j<5;j++){

                      if(matriz[i][j] < menor){
                        segundo = menor;
                        menor = matriz[i][j];
                      }


                }
                printf("\n");
            }

                printf("Segundo maior numero da matriz:%d",segundo);




    return 0;
}
