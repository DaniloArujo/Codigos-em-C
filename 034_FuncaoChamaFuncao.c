#include <stdio.h>

//programa que soma o modulo de dois numeros

float somatorio (int x, int y){
    float positivo (int x);
    if(x < 0){
       x = positivo(x);
    }
    if(y < 0){
        y = positivo(y);
    }

    float somatorio = x + y;
    return somatorio;
}

float positivo (int x){
    float modulo = x * (-1);
    return modulo;
}



int main (void){

    int a = 4;
    int b = -3;

    int soma = somatorio(a,b);

    printf("%i",soma);
    return 0;
}