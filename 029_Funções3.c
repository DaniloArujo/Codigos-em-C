#include<stdio.h>
#include <stdlib.h>


int main(void){
	void teste(void);
	teste();
	teste();
	
	
	return 0;
	system("pause");
}

void teste(void){
	int variavel = 2;
	variavel *= 2;
	printf("%i\n",variavel);
	
}
