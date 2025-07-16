#include <stdio.h>
/*Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
uma data (dia, mˆes, ano) e imprima seus valores..*/

//define a data de publicação do livro

struct ano {
int dia ;
int mes;
int ano;
};

// Define a estrutura para o livro
struct ficha_livro {
char autor[100];
char titulo[100];
struct ano lancamento;

};

int main() {
    // Inicializa os valores da estrutura
struct ficha_livro livro = {"Mary Shelley", "Frankenstein: or the Modern Prometheus",1,1,1818};


// Imprime os valores
printf("Nome:%s \nAutor(a):%s \nDia:%d Mes:%d Ano:%d \n", livro.titulo,livro.autor,livro.lancamento.dia,livro.lancamento.mes,livro.lancamento.ano);

return 0;
}
