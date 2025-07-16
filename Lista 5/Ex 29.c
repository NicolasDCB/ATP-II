#include <stdio.h>
/*Acesse os componentes de uma estrutura de cliente (nome, idade, endere ̧co)
utilizando o operador “-¿” e imprima seus valores.*/

// Define a estrutura para o cliente
struct Cliente{
char nome[100];
int idade;
char endereco[100];
};

void imprimir_cliente(struct Cliente *cliente){
// Imprime os valores da estrutura
printf("Nome:%s \nIdade:%d \nEndereco:%s \n", cliente->nome,cliente->idade,cliente->endereco);
}

int main() {

    // inicializa e atribui valores da estrutura
 struct Cliente cliente = {"Nicolas",19,"Barraco"};

imprimir_cliente(&cliente);

return 0;
}
