#include <stdio.h>
#include <stdlib.h>
#define TAMCHAR 15

struct pessoa{
    char nome[TAMCHAR];
    int idade;
};

void atribuiPessoa(struct pessoa *pont){
    printf("Entre com o nome da pessoa: ");
    scanf("%s",pont->nome);
    printf("Entre com a idade da pessoa: ");
    scanf("%i",&pont->idade);
};

void imprimePessoa(struct pessoa *pont){
    static int variavelEstatica = 1;

    printf("nome da %ia pessoa: %s\n",variavelEstatica,pont->nome);
    printf("idade da %ia pessoa: %i\n",variavelEstatica,pont->idade);
    variavelEstatica ++;
};

int main(void){

    struct pessoa pessoa1;
    struct pessoa pessoa2;

    atribuiPessoa(&pessoa1);
    atribuiPessoa(&pessoa2);
    
    imprimePessoa(&pessoa1);
    imprimePessoa(&pessoa2);

    system('pause');
    return 0;
}