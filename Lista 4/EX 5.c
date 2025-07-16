#include <stdio.h>

// Escreva um programa em C para concatenar dois arquivos de texto em um 3 terceiro arquivo.

int main() {
    FILE *arq1, *arq2, *arq3;
    char letra;

    // Abre o arquivo para leitura
    arq1 = fopen("arquivo.txt", "r");


    // Abre o arquivo para escrita
    arq2 = fopen("arquivo2.txt", "r");

    // Abre o arquivo para escrita
    arq3 = fopen("arquivo3.txt", "a");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq1 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

     if (arq2 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    if (arq3 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Lê o arquivo por carctere e copia
    while (fscanf(arq1, "%c", &letra) != EOF) {
        fprintf(arq3,"%c",letra);
    }

    // Lê o arquivo por carctere e copia
    while (fscanf(arq2, "%c", &letra) != EOF) {
        fprintf(arq3,"%c",letra);
    }

    fclose(arq1);
    fclose(arq2);


    return 0;
}
