#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <string>\n", argv[0]);
        return 1;
    }

    // Contando o n�mero de caracteres da string
    int comprimento = strlen(argv[1]);

    // Imprimindo o n�mero de caracteres
    printf("O n�mero de caracteres da string �: %d\n", comprimento);

    return 0;
}
