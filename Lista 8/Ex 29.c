#include <stdio.h>

int main() {
    // Declara��o de um array de ponteiros para strings
    char *strings[5];

    // Aloca��o de mem�ria e atribui��o de valores �s strings
    strings[0] = "Primeira string";
    strings[1] = "Segunda string";
    strings[2] = "Terceira string";
    strings[3] = "Quarta string";
    strings[4] = "Quinta string";

    // Impress�o das strings
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
