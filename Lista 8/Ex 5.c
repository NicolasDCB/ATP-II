#include <stdio.h>
#include <string.h>


int main() {
    int array[5];

    for(int x=0;x<5;x++){
    printf("\n Digite o %d numero:",x+1);
    scanf("%d",&array[x]);
    }

    for(int x=4;x>=0;x--){
    printf("\n %d",array[x]);
    }
    return 0;
}
