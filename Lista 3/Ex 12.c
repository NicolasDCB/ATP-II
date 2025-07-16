#include <stdio.h>

/*Resolva um problema de cadastro de alunos utilizando estruturas.*/


// Define a estrutura para o aluno

struct ficha_aluno{
char nome[100];
int idade;
int ra;
int cpf;
};



int main() {

int num;

    // pergunta quantos alunos serão cadastrados

      printf("Insira o numeros de alunos que serão cadastrados no sistema:");
      scanf("%d",&num);
      struct ficha_aluno aluno[num];

 for(int i=0;i<num;i++){
 printf("Insira os dados do aluno %d (nome, idade, ra,CPF)\n",i+1);
 scanf("%s",aluno[i].nome);
fflush(stdin);
 scanf("%d",&aluno[i].idade);
 scanf("%d",&aluno[i].ra);
  scanf("%d",&aluno[i].cpf);

 }

 printf("\nAlunos cadastrados com sucesso!!\n");


// Imprime os valores da estrutura
for(int x=0;x<num;x++){
printf("\n");
printf("Dados do aluno %d",x+1);
printf("\nNome:%s \nIdade:%d \nRA:%.d n\CPF:%d", aluno[x].nome,aluno[x].idade,aluno[x].ra,aluno[x].cpf);

}


return 0;
}
