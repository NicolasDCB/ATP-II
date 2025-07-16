#include <stdio.h>
/*Acesse os componentes de uma estrutura de cliente (nome, idade, endereco)
utilizando o operador ponto ‘.’ e imprima seus valores.*/

// Define a estrutura para o cliente
struct Cliente {
char nome[100];
int idade;
char endereco[100];
};

int main() {

  struct Cliente cliente;

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
