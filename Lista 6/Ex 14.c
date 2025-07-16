#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fun��o recursiva para verificar se uma palavra � um pal�ndromo
int ehPalindromo(char palavra[], int inicio, int fim) {
    // Caso base: se o in�cio for maior ou igual ao fim, � um pal�ndromo
    if (inicio >= fim) {
        return 1;
    }
    // Ignorar caracteres n�o alfanum�ricos
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
        printf("A palavra '%s' � um pal�ndromo.\n", palavra);
    } else {
        printf("A palavra '%s' n�o � um pal�ndromo.\n", palavra);
    }

    return 0;
}
