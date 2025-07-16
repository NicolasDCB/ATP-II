#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int num[15],maior=0,i;

  srand(time(0));


  for (i=0; i < 15; i++)
  {
    num[i] = rand() % 50;
    if(maior <= num[i]){
        maior = num[i];
    }

  }


 printf(" O maior numero entre os 15 maiores gerados e o: %d",maior);
  printf("\n");


  return 0;
}
