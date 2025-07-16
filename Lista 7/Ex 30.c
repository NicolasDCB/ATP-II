#include <stdio.h>

float calcularMedia(int matriz[4][4]) {
    int soma = 0;
    int totalElementos = 4 * 4; // Número total de elementos na matriz 4x4

    // Soma todos os elementos da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }

    // Calcula a média
    return (float)soma / totalElementos;
}

void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Matriz:\n");
    imprimirMatriz(matriz);

    float media = calcularMedia(matriz);
    printf("\nMédia dos elementos da matriz: %.2f\n", media);

    return 0;
}
