#include <stdio.h>
/*Acesse os componentes de uma estrutura de aluno (nome, matr ́ıcula, nota)
utilizando o operador “-¿” e imprima seus valores..*/

// Define a estrutura para o filme
struct Filme{
char nome[100];
char diretor[100];
int ano;
};

void imprimir_filme(struct Filme *filme){
// Imprime os valores da estrutura
printf("Nome:%s \nDiretor:%d \nAno de lancemento:%d \n", filme->nome,filme->diretor,filme->ano);
}

int main() {

    // inicializa e atribui valores da estrutura
 struct Filme filme = {"Alien, o 8 Passageiro","Ridley Scott",1979};

imprimir_filme(&filme);

return 0;
}
