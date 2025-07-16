#include <stdio.h>

float calcularMedia(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    float media = calcularMedia(numeros, 5);
    printf("A m�dia dos elementos do array �: %.2f\n", media);
    return 0;
}
