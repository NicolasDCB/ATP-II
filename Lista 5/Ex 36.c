#include <stdio.h>

// Definindo a estrutura para o Livro
struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};

int main() {
    // Definindo um arranjo de livros
    struct Livro livros[5];  // Vamos assumir que queremos cadastrar até 5 livros
    int n;

    printf("Quantos livros você deseja cadastrar (maximo 5)? ");
    scanf("%d", &n);

    // Capturando os dados dos livros
    for(int i = 0; i < n; i++) {
        printf("Livro %d:\n", i + 1);

        printf("Título: ");
        scanf(" %[^\n]s", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]s", livros[i].autor);

        printf("Ano de Publicação: ");
        scanf("%d", &livros[i].ano);
    }

    // Imprimindo os dados dos livros cadastrados
    printf("\nLivros cadastrados:\n");
    for(int i = 0; i < n; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de Publicação: %d\n", livros[i].ano);
    }

    return 0;
}
