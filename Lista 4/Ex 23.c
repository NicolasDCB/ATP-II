#include <stdio.h>

int main() {
    FILE *arq;
    fpos_t pos;

    arq = fopen("arquivo.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Obtém a posição atual do arquivo
    if (fgetpos(arq, &pos) != 0) {
        printf("Erro ao obter a posição do arquivo.\n");
        fclose(arq);
        return 1;
    }

    printf("Posição atual do arquivo obtida com sucesso.\n");



    fclose(arq);
    return 0;
}

