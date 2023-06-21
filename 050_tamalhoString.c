#include <stdio.h>

int main(void){
    int tamanhoString(char string[]);
    char stringUsuario[20];

    printf("Entre com a String: ");
    scanf("%s", stringUsuario);

    int tamanho = tamanhoString(stringUsuario);

    printf("%i",tamanho);

    return 0;
}

int tamanhoString(char string[]){
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0'){
        ++numCaracteres;
    }
    return numCaracteres;
}