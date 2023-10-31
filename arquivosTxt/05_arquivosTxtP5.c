#include <stdio.h>

void copiarConteudo(FILE *file1, FILE *file2){
    char leitor[1000];
    while(fgets(leitor,1000,file1) != NULL)
        fputs(leitor,file2);
};

int main(void){

    FILE *file1 = fopen("..\\string.txt","r");

    if(file1 == NULL){
        printf("Arquivo de texto nao encontrado");
    };

    FILE *file2 = fopen("..\\stringCopia.txt","w");

    copiarConteudo(file1,file2);

    fclose(file1);
    fclose(file2);


    return 0;
}