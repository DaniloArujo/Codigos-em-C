#include <stdio.h>
#include <stdlib.h>

void atribuiValores(int *x){
    printf("Entre com o valor a ser atribuido: ");
    scanf("%i",x);
}

int main(void){

    int num1, num2;
    int *pontNum1, *pontNum2;

    pontNum1 = &num1;
    pontNum2 = &num2;

    printf("%p\n",pontNum1);
    atribuiValores(pontNum1);
    printf("%i",*pontNum1);

    return 0;
}