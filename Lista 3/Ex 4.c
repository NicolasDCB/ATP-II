#include <stdio.h>
/*Acesse os componentes de uma estrutura de aluno (nome, matr ́ıcula, nota)
utilizando o operador ponto ‘.’ e imprima seus valores.*/

// Define a estrutura para o aluno por typedef
typedef struct  {
char nome[100];
int matricula;
int nota;
}aluno;

int main() {

    // inicializa e atribui valores da estrutura
   aluno alun = {"Nicolas",102030,7};



// Imprime os valores da, estrutura
printf("Nome:%s \nMatricula:%d \nNota:%d \n", alun.nome,alun.matricula,alun.nota);
return 0;
}
