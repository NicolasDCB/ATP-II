#include <stdio.h>

/*
Escreva um programa em C que verifique se duas matrizes 2x2
s�o iguais.
*/

int main() {

    // Declara��o e inicializa��o da primeira matriz 2x2
int matrizA[2][2]={
{1,2},
{3,5},

};

  // Declara��o e inicializa��o da segunda matriz 2x2
int matrizB[2][2]={
{1,4},
{3,5},


};
int valor=1; // variavel que me diz se s�o iguais


    // verificando os elementos das matrizes
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        if(matrizA[i][j] != matrizB[i][j]){
      printf("As n�o s�o iguais!");
          return 0;

         }
        }

    }

    if(valor == 1){

    printf("As matrizes s�o iguais!");

    return 0;
}

}
