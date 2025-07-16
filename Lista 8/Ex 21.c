#include <stdio.h>

int main() {
    int array[10] = {34, 7, 23, 32, 5, 62, 32, 2, 77, 1};
    int i, maior, menor;

    maior = menor = array[0];

    for (i = 1; i < 10; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
