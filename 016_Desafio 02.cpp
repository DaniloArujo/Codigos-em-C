#include <stdio.h>

int main(){
	int a, b;
	
	printf("Digite um valor qualquer: \n");
	scanf("%i",&a);
	
	do{
		printf("Digite um valor positivo maior que zero: \n");
		scanf("%i",&b);
		if (b <= 0)
			printf("Valor invalido\n");
	} while (b <= 0);

	if (a % b == 0)
		printf("%i e divisivel por %i\n", a, b);
	else 
		printf("%i nao e divisivel por %i\n", a, b);
	
 return 0;
	
}
