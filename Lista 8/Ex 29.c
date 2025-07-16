#include <stdio.h>

int main() {
    // Declaração de um array de ponteiros para strings
    char *strings[5];

    // Alocação de memória e atribuição de valores às strings
    strings[0] = "Primeira string";
    strings[1] = "Segunda string";
    strings[2] = "Terceira string";
    strings[3] = "Quarta string";
    strings[4] = "Quinta string";

    // Impressão das strings
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
