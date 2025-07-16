    #include <stdio.h>

// Escreva um programa em C para calcular a soma de todos os n ́umeros em um arquivo de texto contendo n ́umeros inteiros.

int main() {
    FILE *arq;
    int soma=0,num;

    // Abre o arquivo para leitura
    arq = fopen("numeros.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }


      while(fscanf(arq,"%d",&num)!=EOF){
      soma = soma + num;
      }

      printf("Soma dos numeros:%d",soma);

    fclose(arq);

    return 0;
}
