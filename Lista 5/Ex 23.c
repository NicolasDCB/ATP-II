#include <stdio.h>

/*Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os meses do ano e
imprima os valores.*/

    enum meses {
        janeiro,
        fevereiro,
        marco,
        abril,
        maio,
        junho,
        julho,
        agosto,
        setembro,
        outubro,
        novembro,
        dezembro
    } ;

int main() {

    for(int mes=janeiro;mes<=dezembro;mes++){

        switch(mes){
          case janeiro: printf("Janeiro\n");break;
          case fevereiro: printf("Fevereiro\n");break;
          case marco: printf("Marco\n");break;
          case abril: printf("Abril\n");break;
          case maio: printf("Maio\n");break;
          case junho: printf("Junho\n");break;
          case julho: printf("Julho\n");break;
          case agosto: printf("Agosto\n");break;
          case setembro: printf("Setembro\n");break;
          case outubro: printf("Outubro\n");break;
          case novembro: printf("Novembro\n");break;
          case dezembro: printf("Dezembro\n");break;
        }
    }

    return 0;
}
