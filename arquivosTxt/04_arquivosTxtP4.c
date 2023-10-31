#include <stdio.h>
#include <stdlib.h>


int main(void){

    FILE *arquivo;

    arquivo = fopen("..\\string.txt","a");

    if(arquivo == NULL){
        printf("Arquivo nao encnrado");
        system("pause");
        exit(0);
    };

    fprintf(arquivo,"Linha adicional\n");
    fclose(arquivo);

    return 0;
}