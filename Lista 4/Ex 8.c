    #include <stdio.h>

// Escreva um programa em C para ler e exibir o conte ́udo de um arquivo binario.

int main() {
    FILE *arq1;
    int ra;

    // Abre o arquivo para leitura em binario
    arq1 = fopen("arquivoos.bin", "rb");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq1 == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

     fread(&ra,sizeof(int),1,arq1);

     printf("RA:%d",ra);


    fclose(arq1);

    return 0;
}
