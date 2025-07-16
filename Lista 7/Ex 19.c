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
int matrizB[3][2]={
{1,4},
{3,1},
{5,7}

};

  // Declaração e inicialização da matriz 2x2
int matrizC[2][2],x=0;
int valor=0,y=0;


    // multiplicando as matrizes a atribuindo valores para as posicoes c11 e c22

    for(int i=0;i<2;i++){

         for (int j=0;j<3;j++){
               valor += matrizA[i][j] * matrizB[j][i];

                }

                matrizC[x][x] = valor;
                x++;
                valor=0;
            }

                // multiplicando as matrizes a atribuindo valores para as posicoes c12 e c21


            for(int i=0;i<2;i++){

         for (int j=0;j<3;j++){
               valor += matrizA[i][j] * matrizB[j][1-i];

                }

                matrizC[y][1-y] = valor;
                valor=0;
                y++;
            }



                // Exibindo a matriz


              for(int i=0;i<2;i++){

         for (int j=0;j<2;j++){
                  printf("%d \t",matrizC[i][j]);
                }
                printf("\n");
            }





    return 0;
}
