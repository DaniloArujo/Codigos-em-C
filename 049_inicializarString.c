#include <stdio.h>

int main(void){

    char palavra[7] = {'B','r','a','s','i','l','\0'};
    //char palavra[] = {'B','r','a','s','i','l'};
    
    //O compilador adiciona automaticamente o caractere \0 nos exemplos abaixo

    //char palavra[7]= {"Brasil"};
    //char palavra[] = {"Brasil"};
    //char palavra[] = "Brasil";

    printf("%s",palavra);

    return 0;
}