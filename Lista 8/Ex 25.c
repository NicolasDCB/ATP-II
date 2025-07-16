#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, caracteres = 0, palavras = 1, linhas = 1;

    printf("Digite uma string (use \\n para novas linhas e Ctrl+D para terminar):\n");
    while (fgets(str, sizeof(str), stdin) != NULL) {
        for (i = 0; str[i] != '\0'; i++) {
            caracteres++;
            if (str[i] == ' ' || str[i] == '\t') {
                palavras++;
            }
            if (str[i] == '\n') {
                linhas++;
                palavras++; // Considera que cada nova linha come�a com uma nova palavra
            }
        }
    }

    printf("N�mero de caracteres: %d\n", caracteres);
    printf("N�mero de palavras: %d\n", palavras);
    printf("N�mero de linhas: %d\n", linhas);

    return 0;
}
