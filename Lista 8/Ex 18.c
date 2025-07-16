#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declaração e inicialização do array
    int *ptr = array; // Ponteiro apontando para o início do array
    int soma = 0;

    // Usando aritmética de ponteiros para calcular a soma dos elementos do array
    for(int i = 0; i < 10; i++) {
        soma += *(ptr + i);
    }

    // Imprimindo a soma dos elementos do array
    printf("A soma dos elementos do array é: %d\n", soma);

    return 0;
}
