#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5}; // Declara��o e inicializa��o do array
    int *ptr = array; // Ponteiro apontando para o in�cio do array

    // Usando aritm�tica de ponteiros para somar 10 a cada elemento do array
    for(int i = 0; i < 5; i++) {
        *(ptr + i) += 10;
    }

    // Imprimindo o array resultante
    printf("Array resultante:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
