#include <stdio.h>
#include <stdlib.h>

int main(void){
    _Bool stringsIguais(char string1[], int tamanho1, char string2[], int tamanho2);
    int contaString( char string[]);

    char palavra1[50],palavra2[50];

    printf("\nDigite a primeira palavra: ");
    scanf("%s", &palavra1);
    printf("\nDigite a segunda palavra: ");
    scanf("%s", &palavra2);
    

    if(stringsIguais(palavra1,contaString(palavra1),palavra2,contaString(palavra2))){
        printf("Strings iguais");
    }else{
        printf("Strings diferentes");
    }
    return 0;
};

int contaString(char string[]){
    int contador = 0;
    while(string[contador] != 0){
        contador++;
    }
    contador ++;
    return contador;
};

_Bool stringsIguais(char string1[], int tamanho1, char string2[], int tamanho2) {
    _Bool igual = 0;
    int i;

    if (tamanho1 != tamanho2) {
        igual = 0;
    }else{
        for(i = 0; i < tamanho1; i++) {
            if (string1[i] != string2[i]){
                igual = 0;
                break;
            }else{
                igual = 1;
            }
        }
    }

    system("pause");
    return igual;
}