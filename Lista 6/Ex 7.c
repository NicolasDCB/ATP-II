#include <stdio.h>

/*Crie uma func̃ao recursiva para calcular a potencia de um numero.*/

// Função que que calcula potencia de um numero

  int potencia(int num, int exp) {
    if(exp == 0){
    return 1;
    }

    if(exp == 1){
    return num;
    }

    else{
    return num*potencia(num,exp-1);
    }
}

   int main() {
    int resultado,num,exp;

    printf("O insira o numero que deseja elevar:");
    scanf("%d",&num);

    printf("Agora insira o expoente:");
    scanf("%d",&exp);

    // Chamada da função potencia
    resultado = potencia(num,exp);

    // Exibição do resultado
    printf("Resultado: %d\n", resultado);

    return 0;
}
