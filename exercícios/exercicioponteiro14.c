#include <stdio.h>
#include <stdlib.h>

struct lista{
    int valor;
    int endereco;
};

struct lista *procuranumero(struct lista *ponteiro, int numero){
    while(ponteiro != (struct lista *)0){
        if(ponteiro->valor == numero){
            return ponteiro;
        }else{
            ponteiro = ponteiro->endereco;
        }
    };
    return (struct lista *) 0;
};

int main(void){
    struct lista m1,m2,m3,m4;
    struct lista *gancho = &m1;
    struct lista *resultado;
    int numero;

    m1.valor = 10;
    m1.endereco = &m2;
    
    m2.valor = 20;
    m2.endereco = &m3;
    
    m3.valor = 30;
    m3.endereco = &m4;

    m4.valor = 40;
    m4.endereco = (struct lista *)0;
    
    printf("Entre com um valor: ");
    scanf("%i",&numero);

    resultado = procuranumero(gancho,numero);

    if(resultado == (struct lista *)0){
        printf("Numero nao encontrado\n");
    }else{
        printf("O numero %i esta na lista\n",resultado->valor);
    }

    system("pause");
    return 0;
}