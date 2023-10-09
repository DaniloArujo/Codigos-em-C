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
	
	static int variavelEstatica = 0;
	variavelEstatica ++;
	
	
	
	
	printf("Local automatica = %i\n",variavel);
	printf("local estatica = %i\n",variavelEstatica);
	system("pause");
}
