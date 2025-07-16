#include <stdio.h>

/* Escreva um programa em C para ler e exibir o conteúdo de um arquivo de texto. */

int main() {
    FILE *arq;
    char texto[100];

    // Abre o arquivo para leitura
    arq = fopen("arquivo.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Lê e exibe o conteúdo do arquivo linha por linha
    while (fgets(texto, sizeof(texto), arq) != NULL) {
        printf("%s", texto);
    }

    fclose(arq);

    return 0;
}

