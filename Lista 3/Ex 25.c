#include <stdio.h>
/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um aluno
(nome, matr ́ıcula, nota) e imprima seus valores.*/

// Define a estrutura para o aluno por typedef
struct Aluno {
char nome[100];
int matricula;
int nota;
};

int main() {

    // inicializa e atribui valores da estrutura
  struct Aluno alun = {"Pedro",14523,8};


// Imprime os valores da, estrutura
printf("Nome:%s \nMatricula:%d \nNota:%d \n", alun.nome,alun.matricula,alun.nota);
return 0;
}
