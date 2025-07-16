    #include <stdio.h>

// Escreva um programa em C para encontrar o maior e o menor n ́umero em um arquivo de texto contendo numeros inteiros.

int main() {
    FILE *arq;
    int soma=0,num,maior=0,menor=9999;

    // Abre o arquivo para leitura
    arq = fopen("numeros.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }


      while(fscanf(arq,"%d",&num)!=EOF){
      if(maior<=num){
        maior = num;
        }

        if(menor>=num){
            menor = num;
        }

      }

      printf("Maior numero do arquivo:%d\nMenor numero do arquivo:%d",maior,menor);

    fclose(arq);

    return 0;
}
