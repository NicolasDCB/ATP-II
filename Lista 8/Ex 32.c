#include <stdio.h>
#include <string.h>

int main() {
    // Array de ponteiros para armazenar 4 strings
    char *strings[4];
    strings[0] = "Copilot";
    strings[1] = "Microsoft";
    strings[2] = "Inteligência Artificial";
    strings[3] = "GPT-4";

    // Variáveis para armazenar a string de maior comprimento e seu comprimento
    char *maiorString = strings[0];
    int maiorComprimento = strlen(strings[0]);

    // Loop para encontrar a string de maior comprimento
    for (int i = 1; i < 4; i++) {
        if (strlen(strings[i]) > maiorComprimento) {
            maiorString = strings[i];
            maiorComprimento = strlen(strings[i]);
        }
    }

    // Exibir a string de maior comprimento
    printf("A string de maior comprimento é: %s\n", maiorString);

    return 0;
}
