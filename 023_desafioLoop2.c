#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    float b = 0;     // Variável para contar a quantidade de números
    float soma = 0;  // Variável para armazenar a soma dos números
    float media = 0; // Variável para armazenar a média dos números
    float minimo = 0; // Variável para armazenar o valor mínimo
    float maximo = 0; // Variável para armazenar o valor máximo

    int primeiroNumero = 1; // Variável de controle para o primeiro número

    do {
        printf("Escreva um número (negativo para sair): ");
        scanf("%f", &a);

        if (a >= 0) {
            b = b + 1;         // Incrementa a quantidade de números
            soma = soma + a;   // Soma o número atual ao total

            // Calcula a média após cada entrada
            media = soma / b;

            if (primeiroNumero) {
                minimo = a;       // Define o primeiro número como mínimo e máximo
                maximo = a;
                primeiroNumero = 0; // Desativa o flag do primeiro número
            } else {
                if (a < minimo) {
                    minimo = a; // Atualiza o mínimo se o número atual for menor
                }

                if (a > maximo) {
                    maximo = a; // Atualiza o máximo se o número atual for maior
                }
            }
        }
    } while (a >= 0);

    printf("\nA soma dos números é igual a %.2f\n", soma);
    printf("A média dos números é igual a %.2f\n", media);
    printf("O menor número foi %.2f\n", minimo);
    printf("O maior número foi %.2f\n", maximo);

    system("pause");
    return 0;
}
