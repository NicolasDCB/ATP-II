#include <stdio.h>
/*Atribua os valores de uma estrutura de produto para outra e imprima os valores
da nova estrutura.*/

// Define a estrutura de contato

typedef struct  {
char nome[100];
char preco[100];
int  cod;
}Produto;

int main() {

    // inicializa e atribui valores da estrutura
   Produto produto1 = {"Pera","11,99",1};

   //Declara a segunda estrutura
   Produto produto2;

   produto2 = produto1;


// Imprime os valores da segunda estrutura
printf("Nome:%s \nPreco:%s\nCodigo:%d", produto2.nome,produto2.preco,produto2.cod);

return 0;
}
