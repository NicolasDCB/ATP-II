#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 100



int main() {
    const char *arquivo1 = "arquivo1.txt";
    const char *arquivo2 = "arquivo2.txt";

     FILE *arq1, *arq2;
    char linha1[MAX_LINHA], linha2[MAX_LINHA];
    int numLinha = 1;

    arq1 = fopen(arquivo.txt, "r");
    arq2 = fopen(arquivo2.txt, "r");

    if (arq1 == NULL || arq2 == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    while (fgets(linha1, MAX_LINHA, arq1) != EOF && fgets(linha2, MAX_LINHA, arq2) != EOF) {
        if (strcmp(linha1, linha2) != 0) {
            printf("Diferença na linha %d:\n", numLinha);
            printf("Arquivo 1: %s", linha1);
            printf("Arquivo 2: %s", linha2);
        }
        numLinha++;
    }


    while (fgets(linha2, MAX_LINHA, arq2) != NULL) {
        printf("Linha adicional no arquivo 2 na linha %d: %s", numLinha, linha2);
        numLinha++;
    }

    fclose(arq1);
    fclose(arq2);

    return 0;
}
