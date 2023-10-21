#include <stdio.h>
#include <stdlib.h>

// Este programa utiliza um loop while para imprimir os números de 1 a 5.

int main() {
    // Inicializando um contador
    int contador = 1;
    
    // Usando um loop while para imprimir os números de 1 a 5
    while (contador <= 5) {
        printf("%i\n", contador);
        ++contador; // Incrementando o contador
    }
    
    // Pausando a execução
    system("pause");
    return 0;
}
