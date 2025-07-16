#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int *p,num[6],soma=0;
  num[0] =1;
  num[1]=2;
  num[2]=3;
  num[3]=4;
  num[4]=5;
  num[5]=6;
  num[6]=7;

 p = &num;


  for (int i=0; i < 7 ;i++)
  {


 soma += p[i];

  }

  printf("A soma do vertor e:%d",soma);


  return 0;
}
