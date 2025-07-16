#include <stdio.h>
#include <string.h>

// Função recursiva para inverter uma string
void inverter_string(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }
    // Troca os caracteres nas posições 'inicio' e 'fim'
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    // Chama a função recursivamente para os próximos caracteres
    inverter_string(str, inicio + 1, fim - 1);
}

int main() {
    char str[] = "exemplo";
    int n = strlen(str);
    inverter_string(str, 0, n - 1);
    printf("String invertida: %s\n", str);  // Saída: olpmexe
    return 0;
}
