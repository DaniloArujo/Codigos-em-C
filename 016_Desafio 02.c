#include <stdio.h>
#include <stdlib.h>

// Este programa solicita ao usuário que insira dois valores inteiros. O primeiro valor pode ser qualquer número.
// O segundo valor deve ser um número positivo maior que zero. O programa verifica se o primeiro valor é divisível
// pelo segundo valor e informa o resultado.

int main() {
    // Declarando variáveis para os valores a serem inseridos pelo usuário
    int a, b;
    
    // Solicitando ao usuário que insira o primeiro valor
    printf("Digite um valor qualquer: \n");
    scanf("%i", &a);
    
    do {
        // Solicitando ao usuário que insira o segundo valor, com a condição de que seja positivo e maior que zero
        printf("Digite um valor positivo maior que zero: \n");
        scanf("%i", &b);
        
        // Verificando se o valor é inválido e exibindo uma mensagem apropriada
        if (b <= 0)
            printf("Valor inválido\n");
    } while (b <= 0);
    
    // Verificando se o primeiro valor é divisível pelo segundo valor e exibindo o resultado
    if (a % b == 0)
        printf("%i é divisível por %i\n", a, b);
    else
        printf("%i não é divisível por %i\n", a, b);
    
    // Pausando a execução
    system("pause");
    return 0;
}