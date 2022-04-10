#include <stdio.h>

int main(){
	
	int resposta = 1;
	int fatorial;
	
	printf("digite um valor qualquer: ");
	scanf("%i",&fatorial)
		
	for ( ; fatorial >=1; --fatorial){
		resposta *= fatorial;	
	}
	
	printf(" o resultado da fatoracao e: %i\n",resposta);
	
	return 0;
}
