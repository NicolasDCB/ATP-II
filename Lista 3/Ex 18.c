#include <stdio.h>
/*Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um endere ̧co (rua, n ́umero, cidade) e imprima seus valores.*/

//define o endereco

struct endereco {
char cidade[100];
char bairro[100];
char rua[100];
int num;
};

// Define a estrutura para o cliente
struct ficha_cliente {
char nome[100];
int idade;
struct endereco end;

};

int main() {
    // Inicializa os valores da estrutura
struct ficha_cliente cliente = {"Luqueta", 19,"Atibaia","Imperial","Hernandes",465};


// Imprime os valores
printf("Nome:%s \nIdade:%d \nCidade:%s \nBairro:%s \nRua:%s \nNumero:%d", cliente.nome,cliente.idade,cliente.end.cidade,cliente.end.bairro,cliente.end.rua,cliente.end.num);

return 0;
}
