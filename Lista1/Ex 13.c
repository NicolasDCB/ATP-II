#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int *endereco,num[5];
  num[0] = 1;
  num[1] = 2;
  num[2] = 3;
  num[3] = 5252;
  num[4] = 5;


  for (int i=0; i < 5 ;i++)
  {
   endereco = &num[i];
   printf("%d\n",*endereco);

  }




  return 0;
}
