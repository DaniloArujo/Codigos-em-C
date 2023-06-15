#include <stdio.h>

void main(void){

    int vetor [10] = {4,5,2,7,6,8,1,3,0,9};
    int i;
    void ordenar(int vetor[], int n);

    ordenar(vetor,10);

    for(i = 0; i < 10; i++){
        printf("%i",vetor[i]);
    }

}

void ordenar(int vetor[], int n){
    
    int i, j, temp;

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp; 
            }
        }
    }
}