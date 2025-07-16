#include <stdio.h>

int main() {
    int array[5];
    int i;
    int todosPositivos = 1; // Assume que todos s�o positivos inicialmente

    // Leitura dos elementos do array
    printf("Digite 5 n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Verifica��o se todos os elementos s�o positivos
    for (i = 0; i < 5; i++) {
        if (array[i] <= 0) {
            todosPositivos = 0; // Se encontrar um n�o positivo, muda para 0
            break;
        }
    }

    // Resultado
    if (todosPositivos) {
        printf("Todos os elementos s�o positivos.\n");
    } else {
        printf("Nem todos os elementos s�o positivos.\n");
    }

    return 0;
}
