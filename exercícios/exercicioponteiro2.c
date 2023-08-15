#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numero = 5;
    int *pontNumero = &numero;


    system("cls");
    printf("%p",pontNumero);

    
    return 0;
}