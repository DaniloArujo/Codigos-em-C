#include <stdio.h>
#include <stdlib.h>

// Este programa calcula a área de um retângulo com base e altura fornecidas pelo usuário e imprime o resultado.

int main() {
    // Definindo as variáveis para base, altura e área
    int base, altura, area;
    
    // Solicitando ao usuário que insira o valor da base
    printf("Digite o valor da base: ");
    scanf("%i", &base);
    
    // Solicitando ao usuário que insira o valor da altura
    printf("Digite o valor da altura: ");
    scanf("%i", &altura);

    // Calculando a área do retângulo
    area = base * altura;
    
    // Imprimindo o resultado
    printf("O valor da área do retângulo é = %i", area);

    // Pausando a execução
    system("pause");	
    return 0;
}
