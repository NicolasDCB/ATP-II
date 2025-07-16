#include <stdio.h>

/*Desenvolva uma fun ̧c ̃ao recursiva para calcular a sequˆencia de Fibonacci
ate o eńesimo termo.*/

// Função que que calcula a sequencia de fibonacci de um numero
  int fibonacci(int num) {
    if(num == 1){
    return 0;
    }

    if(num==2){
    return 1;
    }

    else{
    return fibonacci(num-1) + fibonacci(num-2);
    }
}

   int main() {
    int resultado;

    // Chamada da função fatorial
    resultado = fibonacci(10);

    // Exibição do resultado
    printf("Resultado: %d\n", resultado);

    return 0;
}
