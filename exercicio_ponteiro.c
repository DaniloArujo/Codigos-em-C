#include <stdio.h>

int main(void){

    int numero = 10;
    float y = 2.2;
    char z = 'r';

    int *Pnumero = &numero;
    float *PontY = &y;
    char *PontZ = &z;

    printf("%p\n", Pnumero);
    printf("%p\n",PontY);
    printf("%p\n",PontZ);
     
    return 0;
}