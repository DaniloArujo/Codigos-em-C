#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x = 10;
    int *pontx = &x;
    system("cls");
    //imprime o valor que está guardado no espaco de memoria
    printf("%i *pontx \n",*pontx);
    //imprime valor do espaco de memoria
    printf("%i pontx \n",pontx);
    //endereço em hexadecimal
    printf("%x pontx \n",pontx);

    *pontx = 20;

    printf("%i *pontx\n",*pontx);
    printf("%i pontx\n ",pontx);
    
    return 0;
}