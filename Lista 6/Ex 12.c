#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int n, int i) {
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return ehPrimo(n, i + 1);
}

// Função recursiva para imprimir números primos até N
void imprimirPrimos(int n, int atual) {
    if (atual > n)
        return;
    if (ehPrimo(atual, 2))
        printf("%d ", atual);
    imprimirPrimos(n, atual + 1);
}

int main() {
    int N;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    printf("Numeros primos ate %d: ", N);
    imprimirPrimos(N, 2);
    printf("\n");
    return 0;
}
