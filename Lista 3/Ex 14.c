#include <stdio.h>
/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um cliente (nome, idade, endere ̧co) e imprima seus valores.*/

// Define a estrutura para o cliente por typedef
typedef struct  {
char nome[100];
int idade;
char endereco[100];
}Cliente;

int main() {

   Cliente cliente;

    // Recebe os valores da estrutura
 printf("Digite o nome, idade e endereco do cliente:\n");
 scanf("%s",cliente.nome);
 scanf("%d",&cliente.idade);
 scanf("%s",cliente.endereco);

// Imprime os valores
printf("\nDados do cliente");
printf("\nNome:%s\n", cliente.nome);
printf("Idade:%d\n",cliente.idade);
printf("Endereco:%s\n", cliente.endereco);

return 0;
}
