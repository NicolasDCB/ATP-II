#include <stdio.h>

int main() {
    // Declara��o de um array de ponteiros para inteiros
    int *numeros[5];
    int valores[5];

    // Leitura dos n�meros inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o n�mero %d: ", i + 1);
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

    // Impress�o do maior valor
    printf("O maior valor �: %d\n", maior);

    return 0;
}
