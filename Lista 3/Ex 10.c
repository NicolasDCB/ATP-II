#include <stdio.h>
/*Declare e inicialize uma uni ̃ao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.*/

union Valor {
    int i;
    float f;
};

int main() {
    union Valor val;

    // Inicializando com um valor inteiro
    val.i = 42;
    printf("Inteiro: %d\n", val.i);

    // Inicializando com um valor flutuante
    val.f = 3.14;
    printf("Flutuante: %f\n", val.f);

    return 0;
}
