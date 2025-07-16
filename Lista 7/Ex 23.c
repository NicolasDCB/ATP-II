#include <stdio.h>

// Função para calcular o determinante de uma matriz 3x3
int calcularDeterminante(int matriz[3][3]) {
    int determinante = 0;

    // Aplicando a Regra de Sarrus
    determinante = matriz[0][0] * matriz[1][1] * matriz[2][2] +
                   matriz[0][1] * matriz[1][2] * matriz[2][0] +
                   matriz[0][2] * matriz[1][0] * matriz[2][1] -
                   matriz[0][2] * matriz[1][1] * matriz[2][0] -
                   matriz[0][0] * matriz[1][2] * matriz[2][1] -
                   matriz[0][1] * matriz[1][0] * matriz[2][2];

    return determinante;
}

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int determinante = calcularDeterminante(matriz);

    printf("O determinante da matriz é: %d\n", determinante);

    return 0;
}
