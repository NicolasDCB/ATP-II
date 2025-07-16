#include <stdio.h>

int main() {
    float array[8] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9}; // Declara��o e inicializa��o do array
    float *ptr = array; // Ponteiro apontando para o in�cio do array
    float soma = 0.0;
    float media;

    // Usando aritm�tica de ponteiros para calcular a soma dos elementos do array
    for(int i = 0; i < 8; i++) {
        soma += *(ptr + i);
    }

    // Calculando a m�dia
    media = soma / 8;

    // Imprimindo a m�dia dos elementos do array
    printf("A m�dia dos elementos do array �: %.2f\n", media);

    return 0;
}
