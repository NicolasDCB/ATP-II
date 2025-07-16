#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em C para ler um arquivo bin ́ario contendo registros de alunos e exibir os dados formatados.

typedef struct {
    char nome[100];
    int ra;
    int telefone;
} Ficha;

int main() {
    FILE *arq = fopen("arquivo.bin", "rb");
    if (!arq) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Ficha ficha;

    printf("Registros dos Alunos:\n");
    while (fread(&ficha, sizeof(Ficha), 1, arq) == 1) {
        printf("Nome: %s\n", ficha.nome);
        printf("RA: %d\n", ficha.ra);
        printf("Telefone: %d\n", ficha.telefone);
    }

    fclose(arq);
    return 0;
}
