#include <stdio.h>
#include <stdlib.h>

// Este programa solicita que o usuário informe sua idade e, em seguida, verifica se a pessoa tem menos de 18 anos.
// Com base na idade informada, o programa informa se as bebidas alcoólicas estão liberadas ou não.

int main() {
    // Declarando a variável para a idade
    int idade;
    
    // Solicitando ao usuário que informe sua idade
    printf("Favor informar idade\n");
    scanf("%i", &idade);
    
    // Verificando a idade e exibindo uma mensagem apropriada
    if (idade < 18) {
        printf("Bebidas alcoólicas não estão liberadas\n");
    } else {
        printf("Bebidas alcoólicas estão liberadas\n");
    }
    
    // Pausando a execução
    system("pause");
    return 0;
}