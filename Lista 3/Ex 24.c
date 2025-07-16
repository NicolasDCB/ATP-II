#include <stdio.h>

/*Resolva um problema de cadastro de funcionarios utilizando estruturas.*/


// Define a estrutura para o funcionario

struct ficha_funcionario{
char nome[100];
char cargo[100];
int registro;
float salario
};



int main() {

int num;

    // pergunta quantos funcionarios serão cadastrados

      printf("Insira o numeros de funcionarios que serão cadastrados no sistema:");
      scanf("%d",&num);
      struct ficha_funcionario funcionario[num];

 for(int i=0;i<num;i++){
 printf("Insira os dados do funcionario %d (nome, cargo, registro,salario)\n",i+1);
 scanf("%s",funcionario[i].nome);
fflush(stdin);
 scanf("%s",&funcionario[i].cargo);
 scanf("%d",&funcionario[i].registro);
  scanf("%f",&funcionario[i].salario);

 }

 printf("\nFuncionarios cadastrados com sucesso!!\n");


// Imprime os valores da estrutura
for(int x=0;x<num;x++){
printf("\n");
printf("\nDados do Funcionario %d",x+1);
printf("\nNome:%s \nCargo:%s \nRegistro:%.d \nSalario:%.2f", funcionario[x].nome,funcionario[x].cargo,funcionario[x].registro,funcionario[x].salario);

}


return 0;
}
