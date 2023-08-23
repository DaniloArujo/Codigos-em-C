#include <stdio.h>
#include <stdlib.h>


void imprima(void){
	printf("Hello,");
}


int main(){
	void imprima2(void); 
	//por motivos de organiza��o � prefer�vel declarar as fun��es do programa
	
	imprima();
	imprima2(); 
	
	system("pause");
	return 0;
	
}


void imprima2(void){
	printf(" World!");
}
