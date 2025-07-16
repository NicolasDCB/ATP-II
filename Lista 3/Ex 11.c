#include <stdio.h>

    enum dias {
        segunda,
        terca,
        quarta,
        quinta,
        sexta,
        sabado,
        domingo,
    } ;

int main() {

    for(int dia=segunda;dia<=domingo;dia++){

        switch(dia){
          case segunda: printf("Segunda-feira\n");break;
          case terca: printf("Terca-feira\n");break;
          case quarta: printf("Quarta-feira\n");break;
          case quinta: printf("Quinta-feira\n");break;
          case sexta: printf("Sexta-feira\n");break;
          case sabado: printf("Sabado\n");break;
          case domingo: printf("Domingo\n");break;
        }
    }

    return 0;
}

