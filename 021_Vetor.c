#include <stdio.h>
#include <stdlib.h>

int main() {
    // Este programa demonstra o uso de vetores em C e realiza cálculos simples.

    int i = 0;
    int vetor[6] = {1, 0, 5, -2, -5, 7}; // Declara e inicializa um vetor de inteiros com 6 elementos
    int soma = 0;

    vetor[3] = 100; // Atribui o valor 100 à quarta posição do vetor (índice 3)

    soma = vetor[0] + vetor[1] + vetor[3]; // Calcula a soma dos elementos nas posições 0, 1 e 3 do vetor

    for (i = 0; i < 6; i++) { // Loop para percorrer todos os elementos do vetor
        printf("%i\n", vetor[i]); // Exibe o valor do elemento na posição atual
    }

    system("pause"); // Pausa a execução do programa para que o usuário possa ver a saída
    return 0;