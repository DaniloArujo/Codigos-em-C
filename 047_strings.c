#include <stdio.h>
#include <stdlib.h>

int main(void){
    char string[6] = {'B','r','a','s','i','l'};
    int i;

    for(i=0; i<6; i++){
        printf("%c",string[i]);
    }
    system("pause");
    return 0;
}