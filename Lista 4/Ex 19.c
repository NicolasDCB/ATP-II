    #include <stdio.h>

// Escreva um programa em C para verificar se um arquivo de texto esta vazio ou nao.

int main() {
    FILE *arq;
    char texto[100];

    // Abre o arquivo para leitura
    arq = fopen("numeros.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }


      if(fscanf(arq,"%s",&texto)!=EOF){
      printf("O arquivo tem conteudo");
      }

      else{
      printf("O arquivo nao tem conteudo");
      }


    fclose(arq);

    return 0;
}
