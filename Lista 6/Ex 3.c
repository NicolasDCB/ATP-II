#include <stdio.h>

// Função que verifica o maior numero de um array
int maior(int array[], int tamanho) {
    if (tamanho == 1) {
        return array[0];
    } else {
        int maior_restante = maior(array, tamanho - 1);
        if (array[tamanho - 1] > maior_restante) {
            return array[tamanho - 1];
        } else {
            return maior_restante;
        }
    }
}

int main() {
    int array[10], tamanho = 10, num;
  srand(time(0));

    // Declarando os valores do vetor
    for (int x = 0; x < 10; x++) {
        array[x] = rand() % 25;
        printf("\n%d",array[x]);
    }

    // Chamada da função maior
    num = maior(array, tamanho);

    // Exibição do resultado
    printf("\n O maior numero do vetor: %d\n", num);

    return 0;
}
