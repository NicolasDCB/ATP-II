#include <stdio.h>

// Definindo a estrutura para o Livro
struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};

int main() {
    // Definindo um arranjo de livros
    struct Livro livros[5];  // Vamos assumir que queremos cadastrar at� 5 livros
    int n;

    printf("Quantos livros voc� deseja cadastrar (maximo 5)? ");
    scanf("%d", &n);

    // Capturando os dados dos livros
    for(int i = 0; i < n; i++) {
        printf("Livro %d:\n", i + 1);

        printf("T�tulo: ");
        scanf(" %[^\n]s", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]s", livros[i].autor);

        printf("Ano de Publica��o: ");
        scanf("%d", &livros[i].ano);
    }

    // Imprimindo os dados dos livros cadastrados
    printf("\nLivros cadastrados:\n");
    for(int i = 0; i < n; i++) {
        printf("Livro %d:\n", i + 1);
        printf("T�tulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de Publica��o: %d\n", livros[i].ano);
    }

    return 0;
}
