#include <stdio.h>

// Fun��o para verificar se a matriz � uma matriz de reflex�o
int ehMatrizDeReflexao(int matriz[2][2]) {
    return (matriz[0][0] == -matriz[1][1] && matriz[0][1] == matriz[1][0]);
}

int main() {
    int matriz[2][2];

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verifica��o se a matriz � de reflex�o
    if (ehMatrizDeReflexao(matriz)) {
        printf("A matriz � uma matriz de reflex�o.\n");
    } else {
        printf("A matriz n�o � uma matriz de reflex�o.\n");
    }

    return 0;
}
