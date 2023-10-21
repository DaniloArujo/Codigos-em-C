#include <stdio.h>
#include <stdlib.h>

// Este programa demonstra o uso de loops while e do-while, mas nenhum deles será executado, pois a variável "i" é inicializada com 0.

int main() {
    // Inicializando a variável "i" com 0
    int i = 0;
    
    // Nenhum loop while será executado, pois a condição (i != 0) já é falsa.
    while (i != 0) {
        printf("Teste\n");
    }
    
    // Nenhum loop do-while será executado por razões semelhantes.
    do {
        printf("Teste 2\n");
    } while (i != 0);
    
    // Pausando a execução
    system("pause");
    return 0;
}
