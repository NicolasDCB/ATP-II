#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s num1 num2 num3\n", argv[0]);
        return 1;
    }

    // Convertendo os argumentos para inteiros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);

    // Calculando a soma
    int soma = num1 + num2 + num3;

    // Imprimindo a soma
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
