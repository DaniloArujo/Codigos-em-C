#include <stdio.h>

int main(void){

    FILE *file;
    FILE *file2;

    //file = fopen("D:\\Projetos\\Codigos-em-C\\arquivosTxt\\teste.txt","w");
    file = fopen("..\\int.txt","w");
    //CASO EU MODIFIQUE O PROGRAMA E MANTENHA A TAG W O ARQUIVO SERÁ APAGADO E REESCRITO.
    fprintf(file,"10,20,30");
    fclose(file);



    file2 = fopen("..\\string.txt","w");
    fprintf(file2,"este é o meu arquivo .txt");
    fclose(file2);

    return 0;
}