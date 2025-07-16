#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf("Por favor, insira exatamente 5 números inteiros.\n");
        return 1;
    }

    int maior = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior número é: %d\n", maior);
    return 0;
}
