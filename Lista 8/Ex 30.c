#include <stdio.h>
#include <string.h>

void ordenarStrings(char *strings[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int main() {
    // Declaração de um array de ponteiros para strings
    char *strings[3];
    char str1[100], str2[100], str3[100];

    // Leitura das strings
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite a terceira string: ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0'; // Remove o caractere de nova linha

    // Atribuição das strings ao array de ponteiros
    strings[0] = str1;
    strings[1] = str2;
    strings[2] = str3;

    // Ordenação das strings
    ordenarStrings(strings, 3);

    // Impressão das strings ordenadas
    printf("\nStrings ordenadas:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
