#include <stdio.h>

// Função para verificar se a matriz é uma matriz de reflexão
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

    // Verificação se a matriz é de reflexão
    if (ehMatrizDeReflexao(matriz)) {
        printf("A matriz é uma matriz de reflexão.\n");
    } else {
        printf("A matriz não é uma matriz de reflexão.\n");
    }

    return 0;
}
