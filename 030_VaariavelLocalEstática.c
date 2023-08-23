#include<stdio.h>
#include <stdlib.h>

int main(void){
	void teste(void);
	teste();
	teste();
	teste();
	teste();
	
	
	
	return 0;
}

void teste(void){
	int variavel = 2;
	variavel *= 2;
	
	static int variavelEstatica = 2;
	variavelEstatica *=2;
	
	
	
	
	printf("Local automatica = %i\n",variavel);
	printf("local estatica = %i\n",variavelEstatica);
	system("pause");
}
