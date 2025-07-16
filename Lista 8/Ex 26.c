#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Leitura das duas strings
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remover o caractere de nova linha do final da string
    str1[strcspn(str1, "\n")] = 0;

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remover o caractere de nova linha do final da string
    str2[strcspn(str2, "\n")] = 0;

    // Concatenar as strings
    strcat(str1, str2);

    // Imprimir a string resultante
    printf("String resultante: %s\n", str1);

    return 0;
}
