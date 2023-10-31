#include <stdio.h>

int main(void){

    FILE *file;

    //file = fopen("D:\\Projetos\\Codigos-em-C\\arquivosTxt\\teste.txt","w");
    file = fopen("..\\teste.txt","w");
    //CASO EU MODIFIQUE O PROGRAMA E MANTENHA A TAG W O ARQUIVO SERÁ APAGADO E REESCRITO.

    fprintf(file,"Este é o meu arquivo .txt");
    fclose(file);

    return 0;
}