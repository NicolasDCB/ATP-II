#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fun��o para preencher a matriz com n�meros aleat�rios
void preencherMatriz(int matriz[4][4]) {
    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100; // Preenche com n�meros aleat�rios de 0 a 99
        }
    }
}

// Fun��o para ordenar os elementos de uma linha usando bubble sort
void ordenarLinha(int linha[4]) {
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (linha[j] > linha[j + 1]) {
                int temp = linha[j];
                linha[j] = linha[j + 1];
                linha[j + 1] = temp;
            }
        }
    }
}

// Fun��o para ordenar todas as linhas da matriz
void ordenarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        ordenarLinha(matriz[i]);
    }
}

// Fun��o para imprimir a matriz
void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[4][4];

    preencherMatriz(matriz);

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    ordenarMatriz(matriz);

    printf("\nMatriz ordenada:\n");
    imprimirMatriz(matriz);

    return 0;
}
