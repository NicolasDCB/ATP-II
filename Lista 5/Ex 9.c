#include <stdio.h>

/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado.*/

// Define uma estrutura
struct ficha_livro {
char autor[100];
char titulo[100];
int ano;

};

int main() {
int tamanho;
    // Inicializa os valores da estrutura
struct ficha_livro livro = {"Mary Shelley", "Frankenstein: or the Modern Prometheus", 1818};

tamanho = sizeof (livro);

// Imprime os valores
printf("Tamanho da estrutura:%d \n", tamanho);

return 0;
}
