#include <stdio.h>

// Fun��o para verificar se uma matriz 3x3 � uma matriz de permuta��o
int ehMatrizDePermutacao(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        int linhaSoma = 0;
        int colunaSoma = 0;
        for (int j = 0; j < 3; j++) {
            linhaSoma += matriz[i][j];
            colunaSoma += matriz[j][i];
        }
        // Verifica se a soma de cada linha e coluna � igual a 1
        if (linhaSoma != 1 || colunaSoma != 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3 (apenas 0 ou 1):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (ehMatrizDePermutacao(matriz)) {
        printf("A matriz � uma matriz de permuta��o.\n");
    } else {
        printf("A matriz n�o � uma matriz de permuta��o.\n");
    }

    return 0;
}
