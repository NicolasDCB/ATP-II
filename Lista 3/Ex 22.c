#include <stdio.h>
/*Declare e inicialize uma unĩao para armazenar um valor char ou um valor inteiro
e imprima seus valores.*/

union Valor {
     int i;
    char caractere;
};

int main() {
    union Valor val;

    // Inicializando com um valor inteiro
    val.i = 42;
    printf("Inteiro: %d\n", val.i);

    // Inicializando com um valor char
    val.caractere = 'a';
    printf("Caractere: %c\n", val.caractere);

    return 0;
}
