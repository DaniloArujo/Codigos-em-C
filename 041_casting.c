#include <stdio.h>

int main(void){

    int x = 16;
    int y = 3;

    //o programam entende que o resto da divisão entre numeros inteiros é um inteiro.
    float resultado = x/y;

    printf("%f\n",resultado);

    resultado = (float) x / y;

    printf("%f",resultado);

    return 0;
}