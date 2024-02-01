#include <stdio.h>
#include <stdlib.h>
#define CHARSIZE 50

/*
Exercício: Registro de Alunos

Crie uma estrutura chamada Aluno que armazene informações sobre alunos, como nome, idade e nota. Em seguida, implemente um programa em C que realize as seguintes operações:

Declare e inicialize uma variável do tipo Aluno.
Declare um ponteiro para a estrutura Aluno e faça-o apontar para a variável criada.
Utilize o ponteiro para acessar e imprimir os dados do aluno (nome, idade e nota).
Modifique a nota do aluno através do ponteiro.
Imprima novamente os dados do aluno para verificar se a nota foi atualizada com sucesso.
*/

struct aluno{
    char nome[CHARSIZE];
    int idade;
    float nota;
};


void imprimeAluno(struct aluno* alunoptr){
    printf("%s\n",alunoptr->nome);
    printf("%i\n", alunoptr->idade);
    printf("%f\n", alunoptr->nota);

};

int main(void){

    struct aluno aluno01 = {
        "Danilo",
        12,
        3.5
    };

    system("cls");

    struct aluno *aluno01ptr = &aluno01;
    //printf("A idade do aluno %s eh: %i, e sua nota foi: %f", aluno01.nome, aluno01.idade,//aluno01.nota);

    imprimeAluno(aluno01ptr);

    return 0;
}