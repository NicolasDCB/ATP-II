    #include <stdio.h>

// Escreva um programa em C para ler um arquivo de texto e exibir o n ́umero de ocorrˆencias de uma determinada palavra.

int main() {
    FILE *arq;
    char palavra[100],teste[100];
    int cont=0;

   // Abre o arquivo para leitura
    arq = fopen("palavras.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
        //pergunta ao usuario qual palavra ele gostaria de testar
        printf("Insira uma palavra para testar o numero de ocorrencias:");
        scanf("%s",teste);

      while(fscanf(arq,"%S",palavra)!=EOF){
      if(strcmp(palavra, teste) == 0){
        cont++;
        }
      }

      printf("A palavra %s aparece %d veze(s) no arquivo",teste,cont);

    fclose(arq);

    return 0;
}
