#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em C para atualizar um registro em um arquivo bin ́ario.

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

    int raBusca, novoTelefone;
    printf("Digite o RA do registro a ser atualizado: ");
    scanf("%d", &raBusca);
    printf("Digite o novo telefone: ");
    scanf("%d", &novoTelefone);

    Ficha ficha;
    int encontrado = 0;

    // Percorre o arquivo para encontrar e atualizar o registro
    while (fread(&ficha, sizeof(Ficha), 1, arq) == 1) {
        if (ficha.ra == raBusca) {
            // Atualiza o telefone
            ficha.telefone = novoTelefone;
            // Move o ponteiro de volta para a posição do registro a ser atualizado
            fseek(arq, -sizeof(Ficha), SEEK_CUR);
            // Escreve o registro atualizado de volta no arquivo
            fwrite(&ficha, sizeof(Ficha), 1, arq);
            encontrado = 1;
            break;
        }
    }


    fclose(arq);
    return 0;
}
