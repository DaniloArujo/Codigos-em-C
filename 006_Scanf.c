#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int base, altura, area;
	
	printf("Digite o valor da base: ");
	scanf("%i", &base);
	
	printf("Digite o valor da altura: ");
	scanf("%i", &altura);

	area = base * altura;
	
	printf("O valor da area do retangulo e = %i",area);

	system("pause");	
	return 0;
}
