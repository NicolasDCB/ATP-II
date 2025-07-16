#include <stdio.h>
/*Crie uma funcao que recebe uma estrutura de funcion ́ario (nome, sal ́ario, de-
partamento) como parˆametro e imprima seus valores.*/

// Define a estrutura para o funcionario
struct funcionario{
char nome[100];
double salario;
char departamento[100];
};

void imprimir_cliente(struct funcionario *fun){
// Imprime os valores da estrutura
printf("Nome:%s \nSalario:%.2f \nDepartamento:%s \n", fun->nome,fun->salario,fun->departamento);
}

int main() {

    // inicializa e atribui valores da estrutura
 struct funcionario fun = {"Nicolas",1900.00,"TI"};

imprimir_cliente(&fun);

return 0;
}
