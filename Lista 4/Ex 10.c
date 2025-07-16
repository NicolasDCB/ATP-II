    #include <stdio.h>

// Escreva um programa em C para copiar o conte ́udo de um arquivo bin ́ario para outro arquivo.

int main() {
    FILE *arq1,*arq2;
    int vetor[1000],i=0;

    // Abre o arquivo para leitura em binario
    arq1 = fopen("arquivos.bin", "rb");
    arq2 = fopen("arquivoss2.bin", "wb");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq1 == NULL || arq2==NULL) {
        printf("Erro ao abrir os arquivos!\n");
        return 1;
    }

   while (!feof(arq1)) {
    fread(&vetor[i], sizeof(int), 1, arq1);
      i++;
     }

         fwrite(&vetor[i], sizeof(int), 1, arq2);


    fclose(arq1);
    fclose(arq2);

    return 0;
}
