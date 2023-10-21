#include <stdio.h>
#include <stdlib.h>

// Este programa calcula o fatorial de um número inserido pelo usuário e imprime o resultado.

int main() {
    // Declarando variáveis
    int resposta = 1;
    int fatorial;
    
    // Solicitando ao usuário que insira um valor
    printf("Digite um valor qualquer: ");
    scanf("%i", &fatorial);
    
    // Calculando o fatorial
    for (fatorial; fatorial >= 1; --fatorial) {
        resposta *= fatorial;
    }
    
    // Imprimindo o resultado do fatorial
    printf("O resultado da fatoração é: %i\n", resposta);
    
    // Pausando a execução
    system("pause");
    return 0;
}