#include <stdio.h>

/*Escreva uma fun ̧c ̃ao recursiva para calcular o fatorial de um n ́umero.*/

// Função que que calcula o fatorial de um numero
  int fatorial(int x) {
    if(x == 0){
    return 1;
    }

    else{
    return x * fatorial(x-1);
    }
}

int main() {
    int resultado;

    // Chamada da função fatorial
    resultado = fatorial(6);

    // Exibição do resultado
    printf("Resultado: %d\n", resultado);

    return 0;
}
