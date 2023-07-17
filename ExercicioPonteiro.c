#include <stdio.h>

int main(void){

    int numero = 10;

    int *P_numero = &numero;

    printf("%p \n", P_numero);
    printf("%i\n", *P_numero);

    *P_numero = 20;

    printf("%p \n", P_numero);
    printf("%i\n", *P_numero);

    return 0;
}