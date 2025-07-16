#include <stdio.h>

int main() {
    int array[5];
    int i;
    int todosPositivos = 1; // Assume que todos são positivos inicialmente

    // Leitura dos elementos do array
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Verificação se todos os elementos são positivos
    for (i = 0; i < 5; i++) {
        if (array[i] <= 0) {
            todosPositivos = 0; // Se encontrar um não positivo, muda para 0
            break;
        }
    }

    // Resultado
    if (todosPositivos) {
        printf("Todos os elementos são positivos.\n");
    } else {
        printf("Nem todos os elementos são positivos.\n");
    }

    return 0;
}
