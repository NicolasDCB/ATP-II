    #include <stdio.h>

// Escreva um programa em C para calcular a frequencia de cada caractere em um arquivo de texto.

int main() {
    FILE *arq;
    int cont=0;
    char letra='a',teste;

    // Abre o arquivo para leitura
    arq = fopen("arquivo.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

      for(int i=0;i<=120;i++){
       while(fscanf(arq,"%c",&teste)!=EOF){
        if(letra+i == teste){
          cont++;
         }
        }

        if(cont>0){
         printf("A letra %c aparece %d veze(s)\n",letra+i,cont);
        }
        cont=0;
       rewind(arq);
      }



    fclose(arq);

    return 0;
}
