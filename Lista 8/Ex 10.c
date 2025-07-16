#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int num[10],soma=0,i;
  float media;


  srand(time(0));


  for (i=0; i < 10; i++)
  {
    num[i] =  50 + rand() % 100;
    soma = soma + num[i];
     printf("%d\n",num[i]);
    printf("%d\n",soma);


  }

  media = (float)soma/10;

 printf("%.2f",media);
  printf("\n");


  return 0;
}
