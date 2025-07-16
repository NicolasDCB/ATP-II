#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função recursiva para verificar se uma palavra é um palíndromo
int ehPalindromo(char palavra[], int inicio, int fim) {
    // Caso base: se o início for maior ou igual ao fim, é um palíndromo
    if (inicio >= fim) {
        return 1;
    }
    // Ignorar caracteres não alfanuméricos
    if (!isalnum(palavra[inicio])) {
        return ehPalindromo(palavra, inicio + 1, fim);
    }
    if (!isalnum(palavra[fim])) {
        return ehPalindromo(palavra, inicio, fim - 1);
    }
    // Comparar os caracteres
    if (tolower(palavra[inicio]) != tolower(palavra[fim])) {
        return 0;
    }
    // Chamada recursiva
    return ehPalindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    gets(palavra);

    if (ehPalindromo(palavra, 0, strlen(palavra) - 1)) {
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    } else {
        printf("A palavra '%s' não é um palíndromo.\n", palavra);
    }

    return 0;
}
