#include <stdio.h>

// Escreva um programa em C para contar o n ́umero de linhas em um arquivo de texto.

int main() {
    FILE *arq;
    char linha[100];
    int contador = 0;

    // Abre o arquivo para leitura
    arq = fopen("arquivo.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Lê o arquivo linha por linha e conta as linhas
    while (fgets(linha, sizeof(linha), arq) != NULL) {
        contador++;
    }

    fclose(arq);

    // Imprime o número de linhas
    printf("O arquivo tem %d linhas.\n", contador);

    return 0;
}
