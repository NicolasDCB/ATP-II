#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int *p,num[5];
  num[0] = 1;
  num[1] = 2;
  num[2] = 3;
  num[3] = 4;
  num[4] = 5;


  for (int i=0; i < 5 ;i++)
  {

 p = &num[i];

 num[i] = *p+2;

   printf("Numero alterado pelo ponteiro:%d\n",*p);

  }


  return 0;
}
