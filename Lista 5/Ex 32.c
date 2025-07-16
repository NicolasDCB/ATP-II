#include <stdio.h>
// Definindo a estrutura para o produto
struct Produto {
    char nome[100];
    int codigo;
    float preco;
};

int main() {
    // Inicializando um arranjo de estruturas Produto com 4 elementos
    struct Produto produtos[4] = {
        {"Produto A", 1001, 29.99},
        {"Produto B", 1002, 19.99},
        {"Produto C", 1003, 49.99},
        {"Produto D", 1004, 9.99}
    };

    // Imprimindo os valores dos produtos
    for(int i = 0; i < 4; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Preço: R$%.2f\n\n", produtos[i].preco);
    }

    return 0;
}
