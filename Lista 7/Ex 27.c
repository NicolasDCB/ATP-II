#include <stdio.h>

#define SIZE 3

// Função para multiplicar uma matriz por um escalar
void mt(int matriz[SIZE][SIZE], int scalar, int resultado[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matriz[i][j] * scalar;
        }
    }
}

int main() {
    int matriz[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int scalar = 2;
    int resultado[SIZE][SIZE];

    mt(matriz, scalar, resultado);

    printf("Matriz original:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz resultante após multiplicação por %d:\n", scalar);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
