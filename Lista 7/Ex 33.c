#include <stdio.h>

int main() {
    int matriz[5][5];
    int menor;

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa o menor elemento com o primeiro elemento da matriz
    menor = matriz[0][0];

    // Encontra o menor elemento na matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Exibe o menor elemento encontrado
    printf("O menor elemento da matriz é: %d\n", menor);

    return 0;
}
