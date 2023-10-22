#include <stdio.h>
#include <stdlib.h>

struct node{
    int valor;
    struct node *next;
};

struct node *procuraNaLista(int x,struct node *lista){

    while(lista != (struct node*)0){
        if(lista->valor == x){
            return lista;
        }else{
            lista = lista->next;
        };
    };
    return (struct node*)0; 
};


int main(void){

    struct node m1,m2,m3,m4,m5;

    struct node *lista = &m1;

    m1.valor = 1;
    m1.next = &m2;

    m2.valor = 2;
    m2.next = &m3;

    m3.valor = 3;
    m3.next = &m4;

    m4.valor = 4;
    m4.next = &m5;

    m5.valor = 5;
    m5.next = (struct node*)0;

    int procurar;

    printf("Digite um valor: ");
    scanf("%i",&procurar);

    struct node *resultado = procuraNaLista(procurar, lista);

    if(resultado == NULL){
        printf("valor nao encontrado");
    }else{
        printf("Valor encontrado: %i\n", resultado->valor);
    };
    return 0;
}