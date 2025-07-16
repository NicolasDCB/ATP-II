#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int cont=0;
  char carctere[9],*p;

  carctere[0] ='a';
  carctere[1]='b';
  carctere[2]='C';
  carctere[3]='d';
  carctere[4]='B';
  carctere[5]='f';
  carctere[6]='G';
  carctere[7]='h';
  carctere[8]='I';
  carctere[9]='j';

 p = &carctere;


  for (int i=0; i < 10 ;i++)
  {

   if(p[i]>= 65 && p[i]<=90){
    cont++;
}

  }

  printf("A quantidade de caracteres maisculos e:%d",cont);


  return 0;
}
