    #include <stdio.h>

// Escreva um programa em C para contar o n ́umero de registros em um arquivo binario.

typedef struct {
int ra;
int telefone;
} Ficha;

int main() {
    FILE *arq;

    // Abre o arquivo para leitura em binario
    arq = fopen("arquivoss.bin", "rb");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fseek(arq, 0, SEEK_END);

    long tamanhoArquivo = ftell(arq);

    int numRegistros = tamanhoArquivo / sizeof(Ficha);

    printf("Número de registros no arquivo: %d\n", numRegistros);

    fclose(arq);

    return 0;
}
