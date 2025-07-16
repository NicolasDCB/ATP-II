    #include <stdio.h>

    /*Desenvolva uma funcao recursiva para calcular o MDC (Maximo Divisor
     Comum) de dois numeros.*/

    // Função que que calcula potencia de um numero

      int ocorrencia(int array[], int ele, int tamanho) {

      int cont=0;

        if(tamanho == 0){
          //se o array chegar no final ele encerra a contagem e retorna o numero de ocorrencias
           return 0;
        }

        if(ele == array[tamanho]){
          cont++;
          return cont + ocorrencia(array,ele,tamanho-1);
        }

        else{
         return ocorrencia(array,ele,tamanho-1);
        }



    }

       int main() {
        int array[10]={1,4,3,4,5,6,5,4,9,},ele,tamanho;
        int resultado;

      ele =4;
      tamanho = 9;


        // Chamada da função mdc
        resultado = ocorrencia(array,ele,tamanho);

        // Exibição do resultado
        printf("O numero de ocorrencia da letra na frase e:%d \n",resultado);

        return 0;
    }
