#include <stdio.h>

// Função para inverter o array
void inverterArray(int array[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio < fim) {
        int temp = array[inicio];
        array[inicio] = array[fim];
        array[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Array original: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Chamando a função para inverter o array
    inverterArray(array, 8);

    printf("Array invertido: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
