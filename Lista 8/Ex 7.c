        #include <stdio.h>
#include <string.h>


int main() {
    float array[6],media=0;

    for(int x=0;x<6;x++){
    printf("\n Digite o %d numero:",x+1);
    scanf("%f",&array[x]);
    media += array[x];
    }

    printf("\nMedia de todos o numeros %.2f",media/6);

    return 0;
}
