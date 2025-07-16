#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int num[20],i;


  srand(time(0));


  for (i=0; i < 20; i++)
  {
    num[i] =  rand() % 100;
    printf("%d\n",num[i]);
  }

  printf("\n");


  return 0;
}
