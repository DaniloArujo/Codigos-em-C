#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[], int n){
    int soma = 0;
    int loop = 0;
    int *pontVetor = vetor;


    for(loop = 0; loop < n; loop++){
        soma += *pontVetor;
        pontVetor ++;
    
    };

    return soma;
}


int main (void){

    int vetor[10] = { 10,5,5,5,5,5,5,5,5,5};

    printf("A soma dos numeros dos membros do vetor eh: %i\n",somaVetor(vetor,10));

    system("pause");
    return 0;
}