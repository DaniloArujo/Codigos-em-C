#include <stdio.h>

int a;
int i = 0;
int idade;
char nome[30];
char matricula[10];
char curso[30];
char cpf[30];



int main(){
	
	
	printf("quantidade de alunos a cadastrar:");
	scanf("%i",&a);
	fflush(stdin);
	
	
	for(i=0; i < a; i++){
		printf("Escreva o seu nome: ");
		fgets(nome, 29, stdin);
		//fflush(stdin);
				
		printf("escreva a idade:");
		scanf("%i",&idade);
		fflush(stdin);
		
		printf("Escreva o cpf:");
		fgets(cpf, 29, stdin);
		fflush(stdin);	
		
		printf("Escreva o seu curso:");
		fgets(curso, 29, stdin);
		fflush(stdin);

		printf("Escreva sua matricula: ");
		fgets(matricula, 9, stdin);
		fflush(stdin);
		
		printf("\nNome %s",nome);
		printf("Idade %i\n",idade);
		printf("Nome %i\n",cpf);
		printf("curso %s",curso);
		printf("matricula %s\n",matricula);
		
	}
	
	return 0;
}
