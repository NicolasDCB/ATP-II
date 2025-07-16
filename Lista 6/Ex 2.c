#include <stdio.h>

/*Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos primeiros N
 numeros naturais.*/


// Função que que calcula o fatorial de um numero
  int soma(int num) {
    if(num == 1){
    return 1;
    }

    else{
    return num + soma(num-1);
    }
}

int main() {
    int resultado;

    // Chamada da função fatorial
    resultado = soma(4);

    // Exibição do resultado
    printf("Resultado: %d\n", resultado);

    return 0;
}
