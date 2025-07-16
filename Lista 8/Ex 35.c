#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <n�mero_inteiro>\n", argv[0]);
        return 1;
    }

    // Convertendo o argumento para inteiro
    int numero = atoi(argv[1]);

    // Verificando se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }

    return 0;
}
