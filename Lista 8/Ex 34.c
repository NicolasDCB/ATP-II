#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <string>\n", argv[0]);
        return 1;
    }

    // Contando o número de caracteres da string
    int comprimento = strlen(argv[1]);

    // Imprimindo o número de caracteres
    printf("O número de caracteres da string é: %d\n", comprimento);

    return 0;
}
