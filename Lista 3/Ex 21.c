#include <stdio.h>

/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, ćodigo, prȩco) e imprima o resultado.*/


// Define uma estrutura
struct Produto {
char nome[100];
int cod;
int preco;

};

int main() {
int tamanho;

    // Inicializa os valores da estrutura
struct Produto produto = {"Abacate", 10, 10};

tamanho = sizeof (produto);

// Imprime os valores
printf("Tamanho da estrutura:%d \n", tamanho);

return 0;
}

