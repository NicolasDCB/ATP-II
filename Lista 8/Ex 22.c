#include <stdio.h>

int main() {
    int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int pares = 0, impares = 0;

    for (int i = 0; i < 20; i++) {
        if (array[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("N�mero de elementos pares: %d\n", pares);
    printf("N�mero de elementos �mpares: %d\n", impares);

    return 0;
}
