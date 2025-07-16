#include <stdio.h>

/*
Escreva um programa em C que verifique se duas matrizes 2x2
são iguais.
*/

int main() {

    // Declaração e inicialização da primeira matriz 2x2
int matrizA[2][2]={
{1,2},
{3,5},

};

  // Declaração e inicialização da segunda matriz 2x2
int matrizB[2][2]={
{1,4},
{3,5},


};
int valor=1; // variavel que me diz se são iguais


    // verificando os elementos das matrizes
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        if(matrizA[i][j] != matrizB[i][j]){
      printf("As não são iguais!");
          return 0;

         }
        }

    }

    if(valor == 1){

    printf("As matrizes são iguais!");

    return 0;
}

}
