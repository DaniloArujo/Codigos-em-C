#include <stdio.h>
#include <stdlib.h>


void incrementapont(int *pont, int *pont2){
    (*pont) ++;
    (*pont2) ++;
}

int main(void){
    system("cls");
    int numero = 0;
    int *pontNumero = &numero;

    int numero2 = 1;
    int *pontNumero2 = &numero2;

    printf("numero = %i, endereco = %p\n",numero,pontNumero);
    printf("numero = %i, endereco = %p\n",numero2,pontNumero2);

    printf("###################\n");
    //passando o endereco
    incrementapont(pontNumero, pontNumero2);
    printf("numero = %i, endereco = %p\n",numero,pontNumero);
    printf("numero2 = %i, endereco 2 = %p\n",numero2,pontNumero2);
    
    system("pause");
    return 0;
}