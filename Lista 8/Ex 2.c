#include <stdio.h>
#include <string.h>


int main() {
    char array[6] = {'a','b','c','d','e','\0'};

    for(int x=0;x<10;x++){
    printf("\n%c",array[x]);
    }
    return 0;
}
