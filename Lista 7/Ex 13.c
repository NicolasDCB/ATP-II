 #include <stdio.h>

/*
Escreva um programa em C que verifique se uma matriz 4x4  ́e
uma matriz diagonal.*/

int main() {

    // Declaração e inicialização da matriz 4x4
int matriz[4][4]={
{1,0,0,0},
{0,7,0,0},
{0,0,8,0},
{0,0,0,19}

};



    // Verificando os elementos da matriz, sabendo que os elementos que não são da diagonal principal tem quer ser 0

    for(int i=0;i<4;i++){

         for (int j=0;j<4;j++){

                if(matriz[i][j]!=0 && i!=j){

                printf("A matriz nao e diagonal");

                return 0;
                }

    }


    }

       for(int i=0;i<4;i++){

         for (int j=0;j<4;j++){


            printf("%d \t",matriz[i][j]);


    }
     printf("\n");

    }

        printf("\n A matriz e diagonal");



    return 0;
}
