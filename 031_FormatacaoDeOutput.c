#include <stdio.h>

int main(void){
	int var = 999999999;
	int var2 = 10;
	double doublevar = 100.123456789;
	
	//formata��o de vari�veis inteiras
	
	printf("Variavel inteira (%%d) = %7d\n", var2);
	printf("Variavel inteira (%%i) = %i\n", var);
	printf("Variavel inteira (%%x) = %x\n", var);
	printf("Variavel inteira (%%o) = %o\n", var);
	printf("\n");
	
	//formata��o de vari�veis float e double
	
	printf("variavel double (%%f) = %f\n", doublevar);
	printf("variavel double (%%e) = %e\n", doublevar);
	printf("variavel double (%%g) = %g\n", doublevar);
	printf("variavel double (%%a) = %a\n", doublevar);
	printf("variavel double (%%.2f) = %.2f\n", doublevar);
}
