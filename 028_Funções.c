#include <stdio.h>


void imprima(void){
	printf("Hello,");
}


int main(){
	void imprima2(void); 
	//por motivos de organização é preferível declarar as funções do programa
	
	imprima();
	imprima2(); 
	
	
	return 0;
	
}


void imprima2(void){
	printf(" World!");
}
