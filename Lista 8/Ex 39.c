#include <stdio.h>

int contarPositivos(int arr[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] > 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int numeros[6] = {1, -2, 3, -4, 5, -6};
    int positivos = contarPositivos(numeros, 6);
    printf("O número de elementos positivos no array é: %d\n", positivos);
    return 0;
}
