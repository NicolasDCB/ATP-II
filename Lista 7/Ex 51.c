#include <stdio.h>

/*
Escreva um programa em C que preencha uma matriz 3x3 com
numeros primos e depois calcule o produto dos elementos da diagonal secundaria.*/

int main() {

     // Declaração e inicialização da matriz 3x3
int matriz[3][3];
int soma=0;


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
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            matriz[i][j] = primo[z];
            z++;
            }
        }


  //Exibindo a matriz
        for(int i=0;i<3;i++){

               for(int j=0;j<3;j++){

            printf("%d \t", matriz[i][j]);
            if(i == j && i<2){
                soma += matriz[i+1][j];
            }
            }
            printf("\n");
        }

            printf("A soma dos elementos da diagonal secundaria: %d",soma);



    return 0;
}
