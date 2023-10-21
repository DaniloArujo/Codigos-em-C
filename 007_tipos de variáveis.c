#include <stdio.h>
#include <stdlib.h>

// Este programa declara e imprime uma variável inteira, uma variável de ponto flutuante e um caractere.

int main() {
    // Declarando variáveis de diferentes tipos
    int inteira = 10;
    float decimal = 10.5;
    char caractere = 'a';
    
    // Imprimindo as variáveis
    printf("%i\n", inteira);   // Imprimindo a variável inteira
    printf("%f\n", decimal);   // Imprimindo a variável de ponto flutuante
    printf("%c\n", caractere); // Imprimindo o caractere
    
    // Pausando a execução
    system("pause");
    return 0;
}
