#include <stdio.h>
#include <string.h>

void substituirCaracter(char *str, char antigo, char novo) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}

int main() {
    char str[100];
    char antigo, novo;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &antigo);

    printf("Digite o novo caractere: ");
    scanf(" %c", &novo);

    substituirCaracter(str, antigo, novo);

    printf("String modificada: %s\n", str);

    return 0;
}
