#include <stdio.h>

#define SIZE 3

// Fun��o para verificar se uma matriz � esparsa
int isSparseMatrix(int matrix[SIZE][SIZE]) {
    int zeroCount = 0;
    int totalElements = SIZE * SIZE;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // Verifica se mais da metade dos elementos s�o zeros
    return zeroCount > (totalElements / 2);
}

int main() {
    int matrix[SIZE][SIZE] = {
        {0, 0, 3},
        {0, 0, 0},
        {0, 1, 0}
    };

    if (isSparseMatrix(matrix)) {
        printf("A matriz � esparsa.\n");
    } else {
        printf("A matriz n�o � esparsa.\n");
    }

    return 0;
}
