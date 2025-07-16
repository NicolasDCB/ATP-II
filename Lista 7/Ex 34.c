#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Função para preencher a matriz com números primos
void preencherMatrizComPrimos(int matriz[3][3]) {
    int num = 2; // Primeiro número primo
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            while (!ehPrimo(num)) {
                num++;
            }
            matriz[i][j] = num;
            num++;
        }
    }
}

// Função para substituir números primos por 1
void substituirPrimosPorUm(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (ehPrimo(matriz[i][j])) {
                matriz[i][j] = 1;
            }
        }
    }
}

int main() {
    int matriz[3][3];

    // Preenche a matriz com números primos
    preencherMatrizComPrimos(matriz);

    // Exibe a matriz preenchida com números primos
    printf("Matriz preenchida com números primos:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Substitui números primos por 1
    substituirPrimosPorUm(matriz);

    // Exibe a matriz após substituir números primos por 1
    printf("\nMatriz após substituir números primos por 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
