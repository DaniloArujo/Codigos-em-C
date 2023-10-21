#include <stdio.h>
#include <stdlib.h>

// Este programa realiza operações matemáticas com idades e imprime o resultado.

int main() {
    // Definindo as idades
    int idade1, idade2, idade3, idade4;
    
    idade1 = 20;
    idade2 = 40;
    idade3 = 45;
    idade4 = 15;
        
    // Calculando uma operação matemática com as idades
    int idadetotal;
    
    idadetotal = idade1 * idade2 - idade3 / idade4;
    
    // Imprimindo o resultado
    printf("%i\n", idadetotal);
    
    // Pausando a execução
    system("pause");
    return 0;
}