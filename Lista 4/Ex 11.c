    #include <stdio.h>

// Escreva um programa em C para ler e exibir um registro especıfico em um arquivo binario.

int main() {
    FILE *arq;
    int i,valor;

    // Abre o arquivo para leitura em binario
    arq = fopen("arquivos.bin", "rb");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir os arquivos!\n");
        return 1;
    }

    printf("Insira o numero do registro para abri-lo:");
    scanf("%d",&i);

    fseek(arq,i*sizeof(int),SEEK_SET);
    fread(&valor, sizeof(int), 1, arq);


   printf("Registro:%d",valor);


    fclose(arq);


    return 0;
}
