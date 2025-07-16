#include <stdio.h>

void rotacionarMatriz(int matriz[3][3]) {
    int matrizTemp[3][3];

    // Copia os elementos para a matriz temporária rotacionando 90 graus no sentido anti-horário
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTemp[i][j] = matriz[j][2 - i];
        }
    }

    // Copia os elementos da matriz temporária de volta para a matriz original
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = matrizTemp[i][j];
        }
    }
}

void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    rotacionarMatriz(matriz);

    printf("\nMatriz rotacionada 90 graus no sentido anti-horário:\n");
    imprimirMatriz(matriz);

    return 0;
}
