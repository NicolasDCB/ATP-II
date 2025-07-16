#include <stdio.h>
/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um carro (marca, modelo, ano) e
imprima seus valores.*/

// Define a estrutura para o carro por typedef
typedef struct  {
char marca[100];
char modelo[100];
int ano;
}carro;

int main() {

   carro car;
    // Recebe os valores da estrutura
 printf("Digite a marca, modelo e o ano do carro:");
 scanf("%s",car.marca);
 scanf("%s",car.modelo);
 scanf("%d",&car.ano);

// Imprime os valores
printf("Marca:%s \nModelo(a):%s \nAno:%d \n", car.marca,car.modelo,car.ano);

return 0;
}
