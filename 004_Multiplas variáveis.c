#include <stdio.h>
#include <stdlib.h>

// Este programa define as idades de uma pessoa, seu pai e sua mãe e, em seguida, imprime essas idades na tela.

int main() {
    // Definindo a idade da pessoa
    int minhaidade;
    minhaidade = 26;

    // Definindo as idades do pai e da mãe
    int maeidade = 48;
    int paiidade = 48;

    // Imprimindo as idades na tela
    printf("minha idade = %i\nidade Pai = %i\nidade Mae %i",
           minhaidade, paiidade, maeidade);

    // Pausando a execução
    system("pause");
    return 0;
}
