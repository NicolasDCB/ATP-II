#include <stdio.h>
/*Declare e inicialize uma uni ̃ao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.*/

union Valor {
    double d;
    char c;
};

int main() {
    union Valor val;

    // Inicializando com um valor double
    val.d = 55.55;
    printf("Double: %lf\n", val.d);

    // Inicializando com um valor flutuante
    val.c = 'a';
    printf("Char: %c\n", val.c);

    return 0;
}
