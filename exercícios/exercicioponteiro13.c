#include <stdio.h>
#include <stdlib.h>

void incrementaponteiro(int *ponteiro){

};

void printavalores(int *ponteiro){
    printf("endereco: %p\n",ponteiro);
    printf("endereco em inteiros: %i\n",ponteiro);
    printf("valor: %i\n",*ponteiro);
}

int main(void){

    int x = 1;
    int y = 2;

    int *pontx = &x;
    int *ponty = &y;

    printavalores(pontx);


    system("pause");
    return 0;
}