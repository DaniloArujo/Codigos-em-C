#include <stdio.h>

int main(){

	int i = 0;
	
	while(i!=0){                       //o comando while verifica depois executa
		printf("Teste\n");
	}
	do {
		printf("teste 2\n");
	} while(i != 0);                   // comando do while executa depois verifica

	return 0;
}
