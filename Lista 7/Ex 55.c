#include <stdio.h>
#include <stdbool.h>

// Fun��o para calcular o posto de uma matriz (simplificada)
int calcularPosto(int matriz[4][4], int tamanho) {
    // Implementa��o simplificada para fins ilustrativos
    // Em um caso real, voc� precisaria de uma fun��o mais robusta
    int posto = 0;
    for (int i = 0; i < tamanho; i++) {
        bool linhaNaoNula = false;
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] != 0) {
                linhaNaoNula = true;
                break;
            }
        }
        if (linhaNaoNula) {
            posto++;
        }
    }
    return posto;
}

// Fun��o para verificar se a matriz � uma matriz de Drazin (simplificada)
bool ehMatrizDeDrazin(int matriz[4][4]) {
    int tamanho = 4;
    int postoOriginal = calcularPosto(matriz, tamanho);
    int matrizPotencia[4][4];

    // Calcula A^2
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matrizPotencia[i][j] = 0;
            for (int k = 0; k < tamanho; k++) {
                matrizPotencia[i][j] += matriz[i][k] * matriz[k][j];
            }
        }
    }

    int postoPotencia = calcularPosto(matrizPotencia, tamanho);

    // Verifica se o posto de A^2 � igual ao posto de A
    return postoOriginal == postoPotencia;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {0, 1, 2, 3},
        {0, 0, 1, 2},
        {0, 0, 0, 1}
    };

    if (ehMatrizDeDrazin(matriz)) {
        printf("A matriz � uma matriz de Drazin.\n");
    } else {
        printf("A matriz n�o � uma matriz de Drazin.\n");
    }

    return 0;
}
