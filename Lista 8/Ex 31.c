#include <stdio.h>

int main() {
    // Declaração de um array de ponteiros para inteiros
    int *numeros[5];
    int valores[5];

    // Leitura dos números inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &valores[i]);
        numeros[i] = &valores[i];
    }

    // Encontrar o maior valor
    int maior = *numeros[0];
    for (int i = 1; i < 5; i++) {
        if (*numeros[i] > maior) {
            maior = *numeros[i];
        }
    }

    // Impressão do maior valor
    printf("O maior valor é: %d\n", maior);

    return 0;
}
