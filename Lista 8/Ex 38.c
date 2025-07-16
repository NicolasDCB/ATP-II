#include <stdio.h>

int encontrarMaior(int arr[], int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int main() {
    int numeros[10] = {23, 45, 12, 67, 34, 89, 2, 78, 56, 90};
    int maior = encontrarMaior(numeros, 10);
    printf("O maior elemento do array é: %d\n", maior);
    return 0;
}
