#include <stdio.h>
#include <stdlib.h>

int main() {
    // Este programa permite cadastrar informações de alunos, como nome, idade, CPF, curso e matrícula.
    int a;          // Variável para armazenar a quantidade de alunos a serem cadastrados
    int i = 0;       // Variável de controle do loop
    char nome[30];   // Variável para armazenar o nome
    int idade;       // Variável para armazenar a idade
    char cpf[30];    // Variável para armazenar o CPF
    char curso[30];  // Variável para armazenar o curso
    char matricula[10];  // Variável para armazenar a matrícula

    printf("Quantidade de alunos a cadastrar: ");
    scanf("%i", &a);
    fflush(stdin);

    for (i = 0; i < a; i++) {
        printf("Escreva o seu nome: ");
        fflush(stdin); // Limpe o buffer do teclado antes de usar fgets
        fgets(nome, sizeof(nome), stdin);

        printf("Escreva a idade: ");
        scanf("%i", &idade);
        fflush(stdin);

        printf("Escreva o CPF: ");
        fflush(stdin);
        fgets(cpf, sizeof(cpf), stdin);

        printf("Escreva o seu curso: ");
        fflush(stdin);
        fgets(curso, sizeof(curso), stdin);

        printf("Escreva sua matrícula: ");
        fflush(stdin);
        fgets(matricula, sizeof(matricula), stdin);

        // Imprimindo os detalhes do aluno
        printf("\nNome: %s", nome);
        printf("Idade: %i\n", idade);
        printf("CPF: %s", cpf);
        printf("Curso: %s", curso);
        printf("Matrícula: %s\n", matricula);
    }

    system("pause");
    return 0;
}
