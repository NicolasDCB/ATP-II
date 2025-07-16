#include <stdio.h>

int ehPalindromo(int arr[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        if (arr[i] != arr[tamanho - i - 1]) {
            return 0; // N�o � pal�ndromo
        }
    }
    return 1; // � pal�ndromo
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    if (ehPalindromo(array, 10)) {
        printf("O array � um pal�ndromo.\n");
    } else {
        printf("O array n�o � um pal�ndromo.\n");
    }

    return 0;
}
