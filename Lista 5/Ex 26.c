#include <stdio.h>
/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a definicao de uma estru-
tura para armazenar as informacoes de um professor (nome, disciplina, sal ́ario)

e imprima seus valores.*/

// Define a estrutura para o cliente por typedef
typedef struct  {
char nome[100];
char disciplina[100];
float salario;
}Professor;

int main() {

    Professor professor;

    // Recebe os valores da estrutura

 printf("Digite o nome, disciplina e salario do professor:\n");
 scanf("%s",professor.nome);
 scanf("%s",professor.disciplina);
 scanf("%f",&professor.salario);

// Imprime os valores
printf("\nDados do professor:");
printf("\nNome:%s\n", professor.nome);
printf("Disciplina:%s\n",professor.disciplina);
printf("Salario:%.2f\n", professor.salario);

return 0;
}
