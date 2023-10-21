#include <stdio.h>
#include <stdlib.h>

// Este programa realiza uma divisão entre um número inteiro e um número de ponto flutuante e imprime o resultado.

int main() {
    // Declarando variáveis para os números
    int num1 = 3;
    float num2 = 2;
    
    // Realizando a divisão
    float resultado = num1 / num2;
    
    // Imprimindo o resultado da divisão
    printf("%f\n", resultado);
    
    // Pausando a execução
    system("pause");
    return 0;
}