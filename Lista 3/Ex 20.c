#include <stdio.h>
#define num 3
/*Declare um arranjo de estruturas para armazenar as informacoes de 3 livros
(tıtulo, autor, ano de publicac̃ao) e imprima seus valores.*/

// Define a estrutura para o aluno
struct ficha_livros{
char titulo[100];
char autor[100];
int ano;
};

int main() {

    // inicializa a estrutura
 struct ficha_livros livros[num];

for(int i=0;i<num;i++){
 printf("Insira os dados do livro %d (nome, autor e ano de publicacao)\n",i+1);
 scanf("%s",livros[i].titulo);
fflush(stdin);
 scanf("%s",&livros[i].autor);
 scanf("%d",&livros[i].ano);
 }

// Imprime os valores da estrutura
for(int x=0;x<num;x++){
printf("\n");
printf("Dados do livro %d",x+1);
printf("\nNome:%s ", livros[x].titulo);
printf("\nAutor:%s ", livros[x].autor);
printf("\nAno de publicacao:%d \n", livros[x].ano);

}

return 0;
}
