    #include <stdio.h>

// Escreva um programa em C para calcular a m ́edia de valores armazenados em um arquivo bin ́ario contendo n ́umeros reais.

int main() {
    FILE *arq;
    float soma=0,num;
    int cont=0;

   // Abre o arquivo para leitura
    arq = fopen("numeros.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }


      while(fscanf(arq,"%f",&num)!=EOF){
      soma = soma + num;
      cont++;
      }

      printf("A media dos numeros do arquivo:%f",soma/cont);

    fclose(arq);

    return 0;
}
