#include <stdio.h>
#include <stdlib.h>

// Este programa inverte as cifras de um número inteiro. Ele solicita ao usuário que insira um número e,
// em seguida, inverte e imprime as cifras desse número. Se o número for negativo, o programa inverte as cifras
// e inclui um sinal negativo no resultado.

int main() {
    // Declarando variáveis para o número e a cifra
    int numero, cifra;
    
    // Solicitando ao usuário que insira um número inteiro
    printf("Digite um número inteiro: \n");
    scanf("%i", &numero);
    
    if (numero >= 0) {
        // Se o número for não negativo, inverte as cifras e imprime
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");
    } else if (numero < 1) {
        // Se o número for negativo, inverte as cifras e inclui um sinal negativo no resultado
        numero = numero * -1; // Tornando o número positivo
        
        printf("-"); // Imprimindo um sinal negativo
        
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");
    }
    
    // Pausando a execução
    system("pause");
    return 0;
}