 #include <stdio.h>

/*
Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x2 e armazene o resultado em uma matriz 2x2.*/

int main() {

    // Declaração e inicialização da matriz 2x3
int matrizA[2][3]={
{1,4,5},
{2,3,7}

};

  // Declaração e inicialização da matriz 3x2
int matrizB[2][3]={
{1,4},
{3,1},
{5,7}

};

  // Declaração e inicialização da matriz 2x2
int matrizC[2][2];


    // multiplicando as matrizes a atribuindo valores

    for(int i=0;i<2;i++){

         for (int j=0;j<2;j++){

              matrizC[i][j] = matrizA*[i]

                }
            }



    return 0;
}
