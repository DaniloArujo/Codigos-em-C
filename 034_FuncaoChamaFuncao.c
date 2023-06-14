#include <stdio.h>

//programa que soma o modulo de dois numeros

float positivo (int x){
    float modulo = x * (-1);
    return modulo;
}


float somatorio (int x, int y){
    if(x < 0){
       x = positivo(x);
    }
    if(y < 0){
        y = positivo(y);
    }

    float somatorio = x + y;
    return somatorio;
}



int main (void){

    int a = 4;
    int b = -3;

    int soma = somatorio(a,b);

    printf("%i",soma);
    return 0;
}