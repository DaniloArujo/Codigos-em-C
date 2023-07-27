#include <stdio.h>
#include <stdlib.h>

void atribuiValores(int *x){
    printf("Entre com o valor a ser atribuido: ");
    scanf("%i",x);
}

void somavalores( int *x, int*y, int*z){
    *z = (*x) + (*y);
}

int main(void){

    int num1, num2, soma;
    int *pontNum1, *pontNum2, *pontSoma;

    pontNum1 = &num1;
    pontNum2 = &num2;
    pontSoma = &soma;

    
    atribuiValores(pontNum1);
    atribuiValores(pontNum2);
    
    somavalores(pontNum1,pontNum2,pontSoma);

    printf("%i\n",soma);

    return 0;
}