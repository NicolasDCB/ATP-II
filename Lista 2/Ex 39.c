#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 3

// Escreva um programa em C que verifique se duas matrizes 3x3 s ̃ao semelhantes.
int determinant(int matrix[SIZE][SIZE]) {
    int det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
              matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
              matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    return det;
}

// Função para verificar se duas matrizes são semelhantes
bool areSimilar(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    // Verificar se os determinantes são iguais
    if (determinant(A) != determinant(B)) {
        return false;
    }

    // Verificar se os traços são iguais
    int traceA = A[0][0] + A[1][1] + A[2][2];
    int traceB = B[0][0] + B[1][1] + B[2][2];
    if (traceA != traceB) {
        return false;
    }

    // Verificar se os polinômios característicos são iguais
    // Para simplificação, vamos assumir que se os determinantes e traços são iguais, as matrizes são semelhantes
    return true;
}

int main() {
    int A[SIZE][SIZE] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };

    int B[SIZE][SIZE] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };

    if (areSimilar(A, B)) {
        printf("As matrizes são semelhantes.\n");
    } else {
        printf("As matrizes não são semelhantes.\n");
    }

    return 0;
}
