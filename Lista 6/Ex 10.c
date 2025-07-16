#include <stdio.h>

// Fun��o recursiva para calcular a soma dos d�gitos
int somaDigitos(int n) {
    // Caso base: se o n�mero for 0, a soma dos d�gitos � 0
    if (n == 0)
        return 0;
    // Caso recursivo: soma o �ltimo d�gito e chama a fun��o novamente com o n�mero sem o �ltimo d�gito
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("A soma dos digitos de %d � %d\n", numero, somaDigitos(numero));
    return 0;
}
