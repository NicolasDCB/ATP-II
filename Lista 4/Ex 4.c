#include <stdio.h>

// Escreva um programa em C para copiar o conteudo de um arquivo de texto para outro arquivo.

int main() {
    FILE *arq1, *arq2;
    char letra;

    // Abre o arquivo para leitura
    arq1 = fopen("arquivo.txt", "r");


    // Abre o arquivo para escrita
    arq2 = fopen("arquivo2.txt", "w");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq1 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

     if (arq2 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Lê o arquivo por carctere e copia
    while (fscanf(arq1, "%c", &letra) != EOF) {
        fprintf(arq2,"%c",letra);
    }

    fclose(arq1);
    fclose(arq2);


    return 0;
}
