#include <stdio.h>
#include <string.h>

int main() {
    char array[8];
    int cont = 0;

    for(int x = 0; x < 8; x++) {
        printf("\nDigite o %d caractere: ", x + 1);
        scanf(" %c", &array[x]);

        if(array[x] == 'a' || array[x] == 'e' || array[x] == 'i' || array[x] == 'o' || array[x] == 'u') {
            cont++;
        }
    }

    printf("\nO número de vogais é: %d\n", cont);

    return 0;
}
