#include <stdio.h>

// Função que inverte o array

  int inverter(int array[],int tamanho) {
      //caso de parada(caso base)
     if(tamanho == 0){
     return;
     }

    else{
      printf("\n%d",array[tamanho-1]);
     inverter(array,tamanho-1);
    }
}

int main() {
    int array[10],tamanho=10;

      for(int x=0;x<10;x++){
         array[x] = x;
      }

    // Exibição do resultado
    printf("%d\n", inverter(array,tamanho));

    return 0;
}
