#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definindo dois números
    int num1 = 10;
    int num2 = 20;
    int resposta;

    // Verificando se num1 é menor que num2 e imprimindo "sim" ou "não"
    num1 < num2 ? printf("sim\n") : printf("não");

    // Usando o operador condicional ternário para definir o valor da resposta
    num1 < num2 ? (resposta = 10) : (resposta = -10);

    // Imprimindo o valor de resposta
    printf("%i\n", resposta);

    // Pausando a execução
    system("pause");
    return 0;
}