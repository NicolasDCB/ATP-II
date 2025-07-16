#include <stdio.h>

/*
Escreva um programa em C que preencha uma matriz 5x5 com
numeros primos.*/

int main() {

     // Declaração e inicialização da matriz 5x5
int matriz[5][5]={
{1, 2, 3, 4, 5},
{6, 7, 8, 9, 10},
{11,12,13,14,15},
{16,17,18,19,20},
{21,22,23,24,25}

};


// declaracao das variaveis para gerar os numeros primos
   int primo[25],cont=0,x=0;

   //gerando os numeros primos
   for(int num=1;num<=100;num++){
      for(int div=1;div<=num;div++){
        if(num%div==0){
            cont++;
        }
      }

      if(cont==2){
       primo[x] = num;
       x++;
      }
      cont=0;
   }

   // Dando valor ao elementos da matriz

    int z=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){

            matriz[i][j] = primo[z];
            z++;
            }
        }


  //Exibindo a matriz
        for(int i=0;i<5;i++){

               for(int j=0;j<5;j++){

            printf("%d \t", matriz[i][j]);
            }
            printf("\n");
        }






    return 0;
}
