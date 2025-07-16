#include <stdio.h>
#include <stdlib.h>

#define CHAVE 3 // Valor da soma usada para criptografar

// Função para descriptografar um caractere subtraindo o valor da chave
char descriptografar(char ch, int chave) {
    return ch - chave;
}

void descriptografarArquivo(const char *entrada, const char *saida, int chave) {
    FILE *fileIn = fopen(entrada, "r");
    FILE *fileOut = fopen(saida, "w");

    if (fileIn == NULL || fileOut == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        if (fileIn != NULL) fclose(fileIn);
        if (fileOut != NULL) fclose(fileOut);
        return;
    }

    char ch;
    while ((ch = fgetc(fileIn)) != EOF) {
        fputc(descriptografar(ch, chave), fileOut);
    }

    fclose(fileIn);
    fclose(fileOut);
    printf("Descriptografia concluída. Arquivo salvo como %s.\n", saida);
}

int main() {
    const char *arquivoCriptografado = "criptografado.txt";
    const char *arquivoDescriptografado = "descriptografado.txt";

    // Descriptografa o arquivo
    descriptografarArquivo(arquivoCriptografado, arquivoDescriptografado, CHAVE);

    return 0;
}
