#include <stdio.h>
#include <stdbool.h>

bool ehVandermonde(int matriz[3][3]) {
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            if (matriz[i][j] != matriz[i][0] * matriz[0][j]) {
                return false;
            }
        }
    }
    return true;
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
        {1, 2, 4},
        {1, 2, 4},
        {1, 2, 4}
    };

    printf("Matriz:\n");
    imprimirMatriz(matriz);

    if (ehVandermonde(matriz)) {
        printf("\nA matriz é uma matriz de Vandermonde.\n");
    } else {
        printf("\nA matriz não é uma matriz de Vandermonde.\n");
    }

    return 0;
}
