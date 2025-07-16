 #include <stdio.h>

/*
Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz identidade..*/

int main() {

    // Declaração e inicialização da matriz 3x3
int matriz[3][3]={
{1,0,0},
{0,1,0},
{0,0,1}

};



    // Verificando os elementos da matriz, sabendo que os elementos que não são da diagonal principal tem quer ser 0 e da principal =1

    for(int i=0;i<3;i++){

         for (int j=0;j<3;j++){

                if(matriz[i][j]!=0 && i!=j){

                printf("A matriz nao e identidade");

                return 0;
                }

                 if(matriz[i][j]!=1 && i==j){

                printf("A matriz nao e identidade");

                return 0;
                }

    }


    }

       for(int i=0;i<3;i++){

         for (int j=0;j<3;j++){


            printf("%d \t",matriz[i][j]);


    }
     printf("\n");

    }

        printf("\n A matriz e identidade");



    return 0;
}
