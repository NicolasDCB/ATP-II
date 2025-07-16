#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <número_inteiro>\n", argv[0]);
        return 1;
    }

    // Convertendo o argumento para inteiro
    int numero = atoi(argv[1]);

    // Verificando se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}
