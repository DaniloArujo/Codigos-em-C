#include <stdio.h>
#include <stdbool.h>

// Este programa demonstra a declaração e uso de variáveis de diferentes tipos, incluindo char, bool, int, float e double.

int main() {
    // Declaração e inicialização de uma variável char
    char variavelchar = 'a';
    printf("%c\n", variavelchar);

    // Solicitação ao usuário que insira um caractere e exibição do caractere inserido
    scanf(" %c", &variavelchar);
    printf("%c\n", variavelchar);

    // Declaração e inicialização de uma variável bool
    bool variavelbool = true;
    printf("%i\n", variavelbool);

    // Declaração e inicialização de uma variável int
    int variavelint = 10;
    printf("%i\n", variavelint);

    // Solicitação ao usuário que insira um número inteiro e exibição do número inserido
    scanf("%i", &variavelint);

    // Declaração e inicialização de uma variável float
    float variavelfloat = 10.10;
    printf("%f\n", variavelfloat);

    // Solicitação ao usuário que insira um número de ponto flutuante e exibição do número inserido
    scanf("%f", &variavelfloat);
    printf("%f\n", variavelfloat);

    // Declaração e inicialização de uma variável double
    double variaveldouble = 10.10;
    printf("%f\n", variaveldouble);

    // Solicitação ao usuário que insira um número de ponto flutuante (double) e exibição do número inserido
    scanf("%lf", &variaveldouble);
    printf("%f\n", variaveldouble);

    // Pausando a execução
    system("pause");
    return 0;
}