#include <stdio.h>
#include <stdlib.h>

int main(void){
    int idade;

    printf("DIGITE SUA DIDADE:");
    scanf("%i", &idade);

    if(idade >= 20 && idade <=40){
        printf("Deu certo\n");
    }
    else{
        printf("Deu errado");
    }
    
    system("cls");

    printf("DIGITE SUA DIDADE:");
    scanf("%i", &idade);

    if(idade >= 20 || idade <=40){
        printf("Deu certo\n");
    }
    else{
        printf("Deu errado");
    }

    system("pause");
    return 0;
}   