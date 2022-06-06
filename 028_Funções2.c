#include <stdio.h>

int main(void){
	float calcularAreaQuadrado(float x, float y);
	
	float area = calcularAreaQuadrado(10.0,20.0);
	printf("A area eh %f",area);
	
	return 0;
}


float calcularAreaQuadrado(float base, float altura){
	
	float area = base*altura;
	
	
 	return area;	
}
