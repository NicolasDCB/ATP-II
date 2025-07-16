#include <stdio.h>
/*Atribua os valores de uma estrutura de contato para outra e imprima os valores
da nova estrutura.*/

// Define a estrutura de contato

typedef struct  {
char nome[100];
char numero[100];
}Contato;

int main() {

    // inicializa e atribui valores da estrutura
   Contato contato1 = {"Nicolas","11979675119"};

   //Declara a segunda estrutura
   Contato contato2;

   contato2 = contato1;


// Imprime os valores da segunda estrutura
printf("Nome:%s \nNumero:%s\n", contato2.nome,contato2.numero);

return 0;
}
