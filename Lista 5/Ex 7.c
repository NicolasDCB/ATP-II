#include <stdio.h>

/*Crie uma fun ̧c ̃ao que recebe uma estrutura de aluno (nome, matr ́ıcula, nota)
como parˆametro e imprima seus valores.*/

// Define a estrutura para o aluno
struct ficha_aluno{
char nome[100];
int matricula;
int nota;
};

//funcao que recebe a estrutura como parametro
void imprimir_aluno(struct ficha_aluno alun){
// Imprime os valores da estrutura
printf("Nome:%s \nMatricula:%d \nNota:%d \n", alun.nome,alun.matricula,alun.nota);
}

int main() {

    // inicializa e atribui valores da estrutura
 struct ficha_aluno alun = {"Nicolas",102030,7};

imprimir_aluno(alun);

return 0;
}
