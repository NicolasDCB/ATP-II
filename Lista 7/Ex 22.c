#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para preencher a matriz com números aleatórios
void preencherMatriz(int matriz[4][4]) {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100; // Preenche com números aleatórios de 0 a 99
        }
    }
}

// Função para ordenar os elementos de uma linha usando bubble sort
void ordenarLinha(int linha[4]) {
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (linha[j] > linha[j + 1]) {
                int temp = linha[j];
                linha[j] = linha[j + 1];
                linha[j + 1] = temp;
            }
        }
    }
}

// Função para ordenar todas as linhas da matriz
void ordenarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        ordenarLinha(matriz[i]);
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[4][4];

    preencherMatriz(matriz);

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    ordenarMatriz(matriz);

    printf("\nMatriz ordenada:\n");
    imprimirMatriz(matriz);

    return 0;
}
