#include <stdio.h>

/*Desenvolva uma funcao recursiva para calcular o MDC (Maximo Divisor
 Comum) de dois numeros.*/

// Função que que calcula potencia de um numero

  int mdc(int num1, int num2) {
  int div=0;
   div++;

    if(num1 == num2){
      //se os numero 1 e 2 forem iguais o seu mdc e igual ao proprio numero
    return num1;
    }

    if(num1 % div==0 && num2 % div==0){
      return div*mdc(num1,num2);
    }



}

   int main() {
    int resultado,num1,num2;

    printf("O insira o primeir numero:");
    scanf("%d",&num1);

    printf("Insira o seegundo numero:");
    scanf("%d",&num2);

    // Chamada da função mdc
    resultado = mdc(num1,num2);

    // Exibição do resultado
    printf("O mdc de %d e %d e: %d\n",num1,num2, resultado);

    return 0;
}
