#include <stdio.h>

/*Crie uma fun ̧c ̃ao que recebe uma estrutura de carro (marca, modelo, ano) como
parˆametro e imprima seus valores.*/

// Define a estrutura para o aluno
struct Carro{
char marca[100];
char modelo[100];
int ano;
};

//funcao que recebe a estrutura como parametro
void imprimir_aluno(struct Carro car){
// Imprime os valores da estrutura
printf("Marca:%s \nModelo:%s \nAno:%d \n", car.marca,car.modelo,car.ano);
}

int main() {

    // inicializa e atribui valores da estrutura
 struct Carro car = {"volkswagen","Gol",2005};

imprimir_aluno(car);

return 0;
}
