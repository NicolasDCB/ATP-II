#include <stdio.h>

// Função recursiva para calcular a soma dos dígitos
int somaDigitos(int n) {
    // Caso base: se o número for 0, a soma dos dígitos é 0
    if (n == 0)
        return 0;
    // Caso recursivo: soma o último dígito e chama a função novamente com o número sem o último dígito
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("A soma dos digitos de %d é %d\n", numero, somaDigitos(numero));
    return 0;
}
