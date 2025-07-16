/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um fun-
cion ́ario (nome, sal ́ario, departamento) e imprima seus valores.*/

#include <stdio.h>

// Define a estrutura para o funcionario
struct funcionario {
char nome[100];
char departamento[100];
int salario;

};

int main() {
    // Inicializa os valores da estrutura
struct funcionario fun = {"Luqueta", "tecnologia", 2000};

// Imprime os valores
printf("Dados do funcionario\n");
printf("\nNome:%s \nDepartamento:%s \nSalario:R$%d \n", fun.nome,fun.departamento,fun.salario);

return 0;
}
