#include <stdio.h>
#include <string.h>

// Fun��o recursiva para inverter uma string
void inverter_string(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }
    // Troca os caracteres nas posi��es 'inicio' e 'fim'
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    // Chama a fun��o recursivamente para os pr�ximos caracteres
    inverter_string(str, inicio + 1, fim - 1);
}

int main() {
    char str[] = "exemplo";
    int n = strlen(str);
    inverter_string(str, 0, n - 1);
    printf("String invertida: %s\n", str);  // Sa�da: olpmexe
    return 0;
}
