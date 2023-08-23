#include <stdio.h>
#include <stdlib.h>

//Exercício - Faça um programa inverta as cifras de um número. 

int main(){
	
	int numero, cifra;
	
	printf("Digite um numro inteiro: \n");
	scanf("%i",&numero);
	
	if (numero >= 0){
		do {
			cifra = numero % 10;
			printf("%i",cifra);
			numero /= 10;
		} while (numero != 0);
		printf("\n");
	}
	else if (numero <1)  {
		numero = numero * -1; 
		
		printf("-");
		
		do {
			cifra = numero % 10;
			printf("%i",cifra);
			numero /= 10;
		} while (numero != 0);
		printf("\n");
	}
	system("pause");
	return 0;
}
