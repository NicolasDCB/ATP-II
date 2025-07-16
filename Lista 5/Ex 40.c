#include <stdio.h>

/*Acesse os componentes de uma estrutura de ponto (x, y, z) utilizando o operador
ponto ‘.’ e imprima seus valores.*/

// Definindo a estrutura para o ponto
struct Ponto {
    int x;
    int y;
    int z;
};

int main() {
    // Inicializando a estrutura Ponto
    struct Ponto ponto = {10, 20, 30};

    // Acessando e imprimindo os valores dos componentes
    printf("Coordenadas do ponto:\n");
    printf("x: %d\n", ponto.x);
    printf("y: %d\n", ponto.y);
    printf("z: %d\n", ponto.z);

    return 0;
}
