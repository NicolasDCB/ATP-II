#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declara��o e inicializa��o do array
    int *ptr = array; // Ponteiro apontando para o in�cio do array
    int soma = 0;

    // Usando aritm�tica de ponteiros para calcular a soma dos elementos do array
    for(int i = 0; i < 10; i++) {
        soma += *(ptr + i);
    }

    // Imprimindo a soma dos elementos do array
    printf("A soma dos elementos do array �: %d\n", soma);

    return 0;
}
