#include <stdio.h>

//um programa em execução é diidido em quatro partes dentro da memória:
//O code que é o texto do código em sí.
//static/global: onde estão armazenadas as variáveis e constantes utilizadas no código inteiro.
//stack: onde serão armazenadas as funções e variáveis dentro de uma fila.
//heap: parte volátil acessada apenas por ponteiros. 

//a função main e suas variáveis locais são armazenadas na stack.
int main(void){ 

    //declaro um ponteiro nulo;
    int *p;

    //aloco um espaço no heap e aponto meu ponteiro para lá. Como o ponteiro que a função//
    //malloc retorna é sempre void, tenho que fazer o casting.
    p = (int*)malloc(sizeof(int));

    //adiciono um valor dentro do espaço de memória p
    *p = 10;

    printf("Endereco: %p\nValor contido memoria: %i\n",p,*p);

    //todas as variáveis no heap precisam ser liberadas manualmente.
    free(p);
    p = NULL;

    // a função calloc separa os indereços de memória e inicializa com zero. recebe dois argumentos (int, size) sendo o primeiro a quantidade
    p = (int*)malloc(sizeof(int));
    *p = 20;

    
    printf("#########################################\n");
    printf("Endereco: %p\nValor contido memoria: %i\n",p,*p);

    int *q;
    q = (int*)malloc(4 * sizeof(int));
    *q = 20;
    *(q+1) = 22;

    
    printf("#########################################\n");
    printf("Endereco: %p\nValor contido memoria: %i\n",q,*q);
    
    printf("Endereco: %p\nValor contido memoria: %i\n",q[1],*(q + 1));
    return 0;
}