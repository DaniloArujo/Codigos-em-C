#include <stdio.h>

int main(void){
    int i;

    for(i=1; i<20; i++){
        if(i % 3 == 0 && i % 9 ==0){
            printf("%i Divide por 3 e por 9\n",i);
            break;
        }else{
            printf("%i Nao divide por 3 e por 9\n",i);
        }
    }
    return 0;
}