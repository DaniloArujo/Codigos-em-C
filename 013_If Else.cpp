#include <stdio.h>

int main()
{
	int idade;
	
	printf("Favor informar idade\n");
	scanf("%i",&idade);
	
	if (idade < 18){
		printf("Bebidas alcoolicas nao estao liberadadas\n");	
	} 
	else{
		printf("bebidas alcololicas estao liberadas");
	}
	return 0;
}
