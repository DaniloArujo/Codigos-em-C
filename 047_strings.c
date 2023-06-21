#include <stdio.h>

int main(void){
    char string[6] = {'B','r','a','s','i','l'};
    int i;

    for(i=0; i<6; i++){
        printf("%c",string[i]);
    }
    return 0;
}