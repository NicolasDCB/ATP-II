#include <stdio.h>

/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
funcion ́ario (nome, sal ́ario, departamento) e imprima o resultado.*/

// Define a estrutura para o funcionario
struct Funcionario {
    char nome[100];
    float salario;
    char departamento[50];
};

int main() {
    // Declara uma variável do tipo estrutura Funcionario
    struct Funcionario funcionario;

    // Usa o operador sizeof() para determinar o tamanho da estrutura
    printf("Tamanho da estrutura Funcionario: %lu bytes\n", sizeof(funcionario));

    return 0;
}
