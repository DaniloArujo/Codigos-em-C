#include <stdio.h>
#include <stdlib.h>

// Este programa solicita ao usuário que informe sua idade e, com base na idade fornecida, classifica a pessoa em uma das categorias: bebê, criança, adolescente, adulto ou idoso.

int main() {
    // Declarando a variável para a idade
    int idade;
    
    // Solicitando ao usuário que informe sua idade
    printf("Informar idade: \n");
    scanf("%i", &idade);
    
    // Verificando a idade e exibindo uma mensagem apropriada
    if (idade <= 5)
        printf("Bebê\n");
    else if (idade > 5 && idade <= 10) 
        printf("Criança\n");
    else if (idade > 10 && idade <= 18)
        printf("Adolescente\n");
    else if (idade > 18 && idade <= 50)
        printf("Adulto\n");
    else
        printf("Idoso\n");
    
    // Pausando a execução
    system("pause");
    return 0;
}
