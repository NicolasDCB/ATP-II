    #include <stdio.h>

// Escreva um programa em C para verificar se um n ́umero especıfico esta presente em um arquivo binario contendo n ́umeros inteiros.

int main() {
    FILE *arq;
    int soma=0,num,teste;

   // Abre o arquivo para leitura
    arq = fopen("numeros.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
        //pergunta ao usuario qual numero ele gostaria de testar
        printf("Insira um numero para verificar a presensenca dele no arquivo:");
        scanf("%d",&teste);

      while(fscanf(arq,"%d",&num)!=EOF){
      if(teste == num){
        printf("Esta presente no arquivo");
        return 0;
        }
      }

      printf("Nao esta presente no arquivo");

    fclose(arq);

    return 0;
}
