#include <stdio.h>
#include <stdlib.h>


struct lista{
        int valor;
        struct lista *next;
    };

struct lista *procuravalor(int valor, struct lista *listaPonteiro){

    while(listaPonteiro != (struct lista *)0){
        if(listaPonteiro->valor == valor){
            return listaPonteiro;
        }else{
            listaPonteiro = listaPonteiro->next;
        }
    }

    return(struct lista *) 0;
};


int main(void){

    struct lista m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
    struct lista *resultado;
    int valor;

    m1.valor = 1;
    m2.valor = 2;
    m3.valor = 3;
    m4.valor = 4;
    m5.valor = 5;
    m6.valor = 6;
    m7.valor = 7;
    m8.valor = 8;
    m9.valor = 9;
    m10.valor = 10;

    struct lista *hook = &m1;

    m1.next = &m2;
    m2.next = &m3;
    m3.next = &m4;
    m4.next = &m5;
    m5.next = &m6;
    m6.next = &m7;
    m7.next = &m8;
    m8.next = &m9;
    m9.next = &m10;
    m10.next = (struct lista*)0;

    printf("Digite um valor: ");
    scanf("%i",&valor);

    resultado = procuravalor(valor,hook);

    if (resultado != NULL) {
        printf("Valor encontrado: %i\n", resultado->valor);
    } else {
        printf("Valor nao encontrado.\n");
    }

    system("pause");
    return 0;
}