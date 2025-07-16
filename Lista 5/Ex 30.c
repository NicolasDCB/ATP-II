#include <stdio.h>

/*Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um ponto (x, y, z) e imprima seus valores.*/

// Definindo a estrutura para as coordenadas
struct Coordenadas {
    int x;
    int y;
    int z;
};

// Definindo a estrutura para o ponto, que contém as coordenadas
struct Ponto {
    struct Coordenadas coord;
};

int main() {
    // Inicializando a estrutura Ponto
    struct Ponto ponto = {{1, 2, 3}};

    // Imprimindo os valores
    printf("Coordenadas do ponto:\n");
    printf("x: %d\n", ponto.coord.x);
    printf("y: %d\n", ponto.coord.y);
    printf("z: %d\n", ponto.coord.z);

    return 0;
}
