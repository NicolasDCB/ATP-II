#include <stdio.h>
/*Atribua os valores de uma estrutura para outra e imprima os valores da nova
estrutura.*/

// Define a estrutura para o aluno por typedef
typedef struct  {
char nome[100];
char curso[100];
int idade;
}aluno;

int main() {

    // inicializa e atribui valores da estrutura
   aluno aluno1 = {"Luqueta","rei delas",80};

   //Declara a segunda estrutura
   aluno aluno2;

   aluno2 = aluno1;


// Imprime os valores da segunda estrutura
printf("Nome:%s \nCurso:%s \nIdade:%d \n", aluno2.nome,aluno2.curso,aluno2.idade);

return 0;
}
