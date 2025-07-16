 #include <stdio.h>

/*Escreva um programa em C para criar um arquivo de texto e escrever uma mensagem nele.*/



int main() {

FILE *arq;
arq = fopen("arquivo.txt", "w");


    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    //escreve o texto no aquivo
    fprintf(arq,"%s","Que belezaaa!!");
    fclose(arq);


return 0;
}
