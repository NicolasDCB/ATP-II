#include <stdio.h>

int main() {
    float array[8] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9}; // Declaração e inicialização do array
    float *ptr = array; // Ponteiro apontando para o início do array
    float soma = 0.0;
    float media;

    // Usando aritmética de ponteiros para calcular a soma dos elementos do array
    for(int i = 0; i < 8; i++) {
        soma += *(ptr + i);
    }

    // Calculando a média
    media = soma / 8;

    // Imprimindo a média dos elementos do array
    printf("A média dos elementos do array é: %.2f\n", media);

    return 0;
}
