/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um livro
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.*/

#include <stdio.h>

// Define a estrutura para o filme
struct Filme {
char nome[100];
char diretor[100];
int ano;

};

int main() {
    // Inicializa os valores da estrutura
struct Filme filme = {"Poderoso chefao", "Francis Ford Coppola", 1972};

// Imprime os valores
printf("Nome:%s \nDiretor:%s \nAno de lancamento:%d \n", filme.nome,filme.diretor,filme.ano);

return 0;
}
