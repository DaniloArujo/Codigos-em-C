#include <stdio.h>
#include <stdlib.h>

int main(void){

    int vetor[3] = {1,2,3};
    int *ponteiroVetor = vetor;

    printf("%p\n",ponteiroVetor);
    printf("%i\n",*ponteiroVetor + 0);
    printf("%p\n",ponteiroVetor + 1 );
    printf("%i\n",*ponteiroVetor + 1);
    printf("%p\n",ponteiroVetor + 2 );
    printf("%i\n",*ponteiroVetor + 2);

    return 0;
}