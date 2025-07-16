#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ra;
    int telefone;
} Ficha;

// Função para realizar a busca binária
int buscaBinaria(FILE *arq, int chave, int numRegistros) {
    int inicio = 0;
    int fim = numRegistros - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        Ficha ficha;

        fseek(arq, meio * sizeof(Ficha), SEEK_SET);
        fread(&ficha, sizeof(Ficha), 1, arq);

        if (ficha.ra == chave) {
            return meio;
        } else if (ficha.ra < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    FILE *arq = fopen("arquivo.bin", "rb");
    if (!arq) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fseek(arq, 0, SEEK_END);
    long tamanhoArquivo = ftell(arq);
    int numRegistros = tamanhoArquivo / sizeof(Ficha);
    fseek(arq, 0, SEEK_SET);

    int chave;
    printf("Digite o RA a ser buscado: ");
    scanf("%d", &chave);

    int posicao = buscaBinaria(arq, chave, numRegistros);
    if (posicao != -1) {
        Ficha ficha;
        fseek(arq, posicao * sizeof(Ficha), SEEK_SET);
        fread(&ficha, sizeof(Ficha), 1, arq);
        printf("Registro encontrado:\n");
        printf("RA: %d\n", ficha.ra);
        printf("Telefone: %d\n", ficha.telefone);
    } else {
        printf("Registro não encontrado.\n");
    }

    fclose(arq);
    return 0;
}
