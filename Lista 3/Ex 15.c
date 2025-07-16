#include <stdio.h>
/*Atribua os valores de uma estrutura de endere ̧co para outra e imprima os valores
da nova estrutura.*/

// Define a estrutura para o endereco
struct endereco {
char cidade[100];
char bairro[100];
char rua[100];
int numero;
};

int main() {

// Atribuindo valor a primeira estrutura
  struct endereco end1 = {"Atibaia","Jardim Imperial","Jose hernades",465};;

  //Criando a segunda estrutura
  struct endereco end2;

  //atrbuindo a primeira estrutura a seguunda
  end2 = end1;

// Imprime os valores
printf("\nEndereco\n");
printf("\Cidade:%s\n", end2.cidade);
printf("Bairro:%s\n",end2.bairro);
printf("Rua:%s\n", end2.rua);
printf("Numero:%d\n", end2.numero);

return 0;
