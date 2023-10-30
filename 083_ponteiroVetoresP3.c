#include <stdio.h>
#include <stdlib.h>

int main(void){
    int loop;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ponteiro = &vetor[0];

    for(loop = 0; loop < 10; loop++){
        printf("O endereco de memoria %p contem o valor %i\n",ponteiro + loop,*ponteiro + loop);
    }

    system("pause");
    return 0;
}