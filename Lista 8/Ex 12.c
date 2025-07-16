#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int num[12],cont=0,i;

  srand(time(0));

    printf("Numeros negativos:\n");

  for (i=0; i < 12 ;i++)
  {
    num[i] = -20 + rand() % 40;
    if(num[i] < 0){
            printf("%d\n",num[i]);
    cont++;
     }

  }


 printf(" A quantida de numeros negativos e: %d\n",cont);
  printf("\n");


  return 0;
}
