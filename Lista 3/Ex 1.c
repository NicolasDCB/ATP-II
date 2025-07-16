/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um livro
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.*/

#include <stdio.h>

// Define a estrutura para o livro
struct ficha_livro {
char autor[100];
char titulo[100];
int ano;

};

int main() {
    // Inicializa os valores da estrutura
struct ficha_livro livro = {"Mary Shelley", "Frankenstein: or the Modern Prometheus", 1818};

// Imprime os valores
printf("Nome:%s \nAutor(a):%s \nAno:%d \n", livro.titulo,livro.autor,livro.ano);

return 0;
}
