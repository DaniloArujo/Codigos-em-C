#include <stdio.h>
#include <stdlib.h>

// Este programa solicita que o usuário insira um número inteiro de 1 a 5 e, com base nesse número, imprime uma mensagem correspondente.
// Utiliza a estrutura de controle switch para fazer a seleção da mensagem.

int main() {
    // Declarando uma variável para o número inserido pelo usuário
    int i;
    
    // Solicitando ao usuário que insira um número inteiro de 1 a 5
    printf("Insira um numero inteiro de 1 a 5\n");
    scanf("%i", &i);
    
    // Usando a estrutura de controle switch para selecionar a mensagem com base no valor de "i"
    switch (i) {
        case 1:
            printf("Primeiro\n");
            break;
        case 2:
            printf("Segundo\n");
            break;
        case 3:
            printf("Terceiro\n");
            break;
        case 4:
            printf("Quarto\n");
            break;
        case 5:
            printf("Quinto\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    
    // Pausando a execução
    system("pause");
    return 0;
}
