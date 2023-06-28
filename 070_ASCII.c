#include <stdio.h>
#include <stdlib.h>

int main(void){

    int nome[6] = {68,97,110,105,108,111};
    int i;

    for(i=0; i<6; i++){
        printf("%c",nome[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}