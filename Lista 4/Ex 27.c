#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em C para dividir um arquivo bin ́ario grande em arquivos menores de tamanho fixo.

#define TAMANHO_BLOCO 1024 // Define o tamanho fixo para os arquivos menores

int main() {
    FILE *arqOriginal = fopen("arquivo_grande.bin", "rb");
    if (!arqOriginal) {
        printf("Erro ao abrir o arquivo original.\n");
        return 1;
    }

    char buffer[TAMANHO_BLOCO];
    size_t bytesRead;
    int fileIndex = 0;

    while ((bytesRead = fread(buffer, 1, TAMANHO_BLOCO, arqOriginal)) > 0) {
        char nomeArquivo[20];
        sprintf(nomeArquivo, "parte_%d.bin", fileIndex++);

        FILE *arqParte = fopen(nomeArquivo, "wb");
        if (!arqParte) {
            printf("Erro ao criar o arquivo %s.\n", nomeArquivo);
            fclose(arqOriginal);
            return 1;
        }

        fwrite(buffer, 1, bytesRead, arqParte);
        fclose(arqParte);
    }

    fclose(arqOriginal);
    printf("Arquivo dividido com sucesso em %d partes.\n", fileIndex);
    return 0;
}
