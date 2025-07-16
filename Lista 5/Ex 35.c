#include <stdio.h>


/*Utilize a definicao de tipos enumer ́aveis para representar as estacoes do ano e
imprima os valores.*/

    enum estacao {
        verao,
        outono,
        inverno,
        primavera,
    } ;

int main() {

    for(int estacao=verao;estacao<=primavera;estacao++){

        switch(estacao){
          case verao: printf("Verao\n");break;
          case outono: printf("Outono\n");break;
          case inverno: printf("Inverno\n");break;
          case primavera: printf("primavera\n");break;
        }
    }

    return 0;
}
