#include <stdio.h>

/*Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 5 produtos
(nome, c ́odigo, pre ̧co) e imprima seus valores.*/

#define num 5

// Define a estrutura para o aluno
struct ficha_produto{
char nome[100];
int cod;
float preco;
};



int main() {

    // inicializa e atribui valores da estrutura
 struct ficha_produto produto[num];

 for(int i=0;i<num;i++){
 printf("Insira os dados do produto %d (nome, codigo, preco)\n",i+1);
 scanf("%s",produto[i].nome);
fflush(stdin);
 scanf("%d",&produto[i].cod);
 scanf("%f",&produto[i].preco);
 }

// Imprime os valores da estrutura
for(int x=0;x<num;x++){
printf("\n");
printf("Dados do produto %d",x+1);
printf("\nNome:%s \nCodigo:%d \nPreco:%.2f \n", produto[x].nome,produto[x].cod,produto[x].preco);

}


return 0;
}
