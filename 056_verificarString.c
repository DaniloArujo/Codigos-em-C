#include <stdio.h>

int main(void){

    void isChar(char letra);
    char palavra[100];
    int i = 0;

    printf("Digite umapalavra: ");
    scanf("%s",palavra);

    while(palavra[i] != '\0' ){
        isChar(palavra[i]);
        i++;
    };
    
    return 0;
}


void isChar(char letra){
    if((letra >= 'a' && letra <='z') || (letra >= 'A' && letra <='Z')){
        printf("%c = letra\n",letra);
    }else{
        printf("%c = numero\n",letra);
    }
}