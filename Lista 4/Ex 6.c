#include <stdio.h>

// Escreva um programa em C para buscar e exibir um determinado caractere em um arquivo de texto.

int main() {
    FILE *arq1, *arq2;
    char letra,caractere;
    int encontrado=0;

    // Abre o arquivo para leitura
    arq1 = fopen("arquivo.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq1 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Qual caractere deseja buscar:");
    scanf("%c",&letra);

    // Lê o arquivo por carctere e copia
    while (fscanf(arq1, "%c", &caractere) != EOF) {

    if(caractere == letra){
      encontrado =1;
    }
    }


if(encontrado){

        printf("%O caractere %c foi encontrado",letra);

}

else{
        printf("O caractere %c nao foi encontrado",letra);

}


    fclose(arq1);

    return 0;
}
