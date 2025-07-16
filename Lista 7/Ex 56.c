 #include <stdio.h>

/*
Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleatorios e depois encontre o segundo maior elemento. */

int main() {

    // Declaração da matriz 5x5
int matriz[5][5];
  srand(time(0));

 int maior =-1,segundo=-1;

    // Declarando e Exibindo a matriz 5x5


              for(int i=0;i<5;i++){

                   for (int j=0;j<5;j++){

                      matriz[i][j] = rand() % 25;


                  printf("%d \t",matriz[i][j]);

                }
                printf("\n");
            }

             for(int i=0;i<5;i++){

                   for (int j=0;j<5;j++){

                      if(matriz[i][j] > maior){
                        segundo = maior;
                        maior = matriz[i][j];
                      }

                     else if (matriz[i][j] > maior && matriz[i][j] != maior) {
                segundo = matriz[i][j];
            }


                }
                printf("\n");
            }

                printf("Segundo maior numero da matriz:%d",segundo);




    return 0;
}
