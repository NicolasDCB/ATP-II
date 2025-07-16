#include <stdio.h>
#include <stdbool.h>

// Função para verificar se a matriz é circulante
bool ehCirculante(int matriz[3][3]) {
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] != matriz[i-1][(j+1)%3]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}
    };

    if (ehCirculante(matriz)) {
        printf("A matriz é circulante.\n");
    } else {
        printf("A matriz não é circulante.\n");
    }

    return 0;
}
