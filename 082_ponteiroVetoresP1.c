#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int vetor[3] = {1,2,3};

    int *pontVetor = &vetor[0];
    printf("%p\n",pontVetor);

    pontVetor = &vetor[1];
    printf("%p\n",pontVetor);

    pontVetor = &vetor[2];
    printf("%p\n",pontVetor);


    system("pause");
    return 0;
}