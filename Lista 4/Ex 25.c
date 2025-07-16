#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de dados para armazenar informações de um estudante
typedef struct {
    char nome[50];
    int idade;
    int matricula;
} Estudante;

// Função para salvar os dados dos estudantes em um arquivo de texto
void salvarEstudantes(Estudante *estudantes, int numEstudantes, const char *nomeArquivo) {
    FILE *file = fopen(nomeArquivo, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (int i = 0; i < numEstudantes; i++) {
        fprintf(file, "Nome: %s\n", estudantes[i].nome);
        fprintf(file, "Idade: %d\n", estudantes[i].idade);
        fprintf(file, "Matrícula: %d\n", estudantes[i].matricula);
        fprintf(file, "-----------------------\n");
    }

    fclose(file);
    printf("Dados salvos com sucesso no arquivo %s.\n", nomeArquivo);
}

int main() {
    int numEstudantes;
    printf("Digite o número de estudantes: ");
    scanf("%d", &numEstudantes);

    Estudante *estudantes = (Estudante *)malloc(numEstudantes * sizeof(Estudante));
    if (estudantes == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < numEstudantes; i++) {
        printf("Digite o nome do estudante %d: ", i + 1);
        scanf("%s", estudantes[i].nome);
        printf("Digite a idade do estudante %d: ", i + 1);
        scanf("%d", &estudantes[i].idade);
        printf("Digite a matrícula do estudante %d: ", i + 1);
        scanf("%d", &estudantes[i].matricula);
    }

    salvarEstudantes(estudantes, numEstudantes, "estudantes.txt");

    free(estudantes);
    return 0;
}
