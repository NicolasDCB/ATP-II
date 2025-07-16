#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ra;
    int telefone;
} Ficha;

int main() {
    FILE *arq = fopen("arquivo.bin", "rb+");
    if (!arq) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Calcula o número de registros no arquivo
    fseek(arq, 0, SEEK_END);
    long tamanhoArquivo = ftell(arq);
    int numRegistros = tamanhoArquivo / sizeof(Ficha);
    fseek(arq, 0, SEEK_SET);

    // Aloca memória para os registros
    Ficha *registros = (Ficha *)malloc(tamanhoArquivo);
    if (!registros) {
        printf("Erro de alocação de memória.\n");
        fclose(arq);
        return 1;
    }

    // Lê todos os registros do arquivo
    size_t registrosLidos = fread(registros, sizeof(Ficha), numRegistros, arq);
    if (registrosLidos != numRegistros) {
        printf("Erro ao ler os registros do arquivo.\n");
        fclose(arq);
        return 1;
    }


    // Move o ponteiro do arquivo para o início e escreve os registros ordenados de volta ao arquivo
    fseek(arq, 0, SEEK_SET);
    size_t registrosEscritos = fwrite(registros, sizeof(Ficha), numRegistros, arq);
    if (registrosEscritos != numRegistros) {
        printf("Erro ao escrever os registros ordenados no arquivo.\n");
    }

    // Libera a memória e fecha o arquivo
    fclose(arq);

    printf("Registros ordenados com sucesso.\n");
    return 0;
}

