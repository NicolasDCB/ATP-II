#include <stdio.h>

void inverter(char *inicio, char *fim) {
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char array[12] = "Hello World";
    printf("Original: %s\n", array);

    inverter(array, array + 11); // Inverte o array

    printf("Invertido: %s\n", array);
    return 0;
}
