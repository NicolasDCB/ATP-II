#include <stdio.h>
/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um contato (nome, telefone, email) e imprima seus valores.*/

// Define a estrutura para contato   por typedef
typedef struct  {
char nome[100];
char telefone[100];
char email[100];
}Contato;

int main() {

    Contato contato;

    // Recebe os valores da estrutura

 printf("Digite o nome, telefone e email da pessoa:\n");
 scanf("%s",contato.nome);
 scanf("%s",contato.telefone);
 scanf("%s",&contato.email);

// Imprime os valores
printf("\nDados do professor:");
printf("\nNome:%s\n", contato.nome);
printf("Telefone:%s\n",contato.telefone);
printf("Email:%s\n", contato.email);

return 0;
}
