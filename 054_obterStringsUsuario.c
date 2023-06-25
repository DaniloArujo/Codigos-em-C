#include <stdio.h>

int main(void){

    char nome[30];
    char sobrenome[50];

    printf("Digite os nomes: ");
    scanf("%s %s",&nome, &sobrenome);

    printf("%s",nome);

    return 0;
}