#include<stdio.h>
#include <stdlib.h>

int main(){
	
	int idade;
	
	printf("Informar idade: \n");
	scanf("%i",&idade);
	
	if(idade <= 5)
		printf("bebe");
	else if (idade > 5 && idade <= 10)     //conectando duas condi��es com &&
		printf("crian�a\n");
	else if (idade > 10 && idade <= 18)
		printf("Adolescente\n");
	else if (idade > 18 &&idade <= 50)
		printf("Adulto\n");
	else
		printf("idoso\n");
	
	system("pause");
	return 0;
}
