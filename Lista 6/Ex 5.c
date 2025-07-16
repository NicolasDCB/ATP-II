#include <stdio.h>

// Função que que verifica a divisibilidade de um numero

  int eh_primo(int num, int divisor) {

  if(num <= 1){
    return 0; // Se o numero for menor ou igual a um o numero nao é primo
    }

    if(divisor ==  1){
        return 1; // Se um numero tem somente um divisor ele eh primo
    }

    if(num % divisor ==  0){
        return 0; // Se um numero tem mais de um divisor ele nao eh primo
    }

    else{
    return eh_primo(num, divisor-1);
    }
}

int main() {
    int resultado,num;

    printf("Digite um numero qualquer para verificacao:");
    scanf("%d",&num);
    // Chamada da função primo

    if(eh_primo(num,num-1)){
     // Exibição do resultado
    printf("O numero %d eh primo\n", num);
    }

     else{
     // Exibição do resultado
    printf("O numero %d nao eh primo\n", num);
    }
    return 0;
}
