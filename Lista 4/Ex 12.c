#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ra;
    int telefone;
} Ficha;


int main() {


    //Escreva um programa em C para adicionar novos registros a um arquivo binario.

    // Abre o arquivo em modo de adição binária
    FILE *arq = fopen(arquivo.bin, "ab");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Escreve o novo registro no final do arquivo
    fwrite(&novaFicha, sizeof(Ficha), 1, arq);

    fclose(arq);
    printf("Registro adicionado com sucesso.\n");


    return 0;
}
