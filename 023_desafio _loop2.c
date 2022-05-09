<<<<<<< HEAD
//desafio Somatório e média de uma lista de números – Construa um programa que
//permita a um usuário informar uma série de números, até que um número negativo
//seja fornecido. Ao final, imprima o somatório desses números, a média, o valor
//máximo e o mínimo. Desconsidere o último número informado pelo usuário





#include <stdio.h>


int main(){
	
	float a;
	float b;
	float soma = 0;
	float media;
	float minimo ;
	float maximo ;
	

	
	do{ 
	
		printf("escreva um numero: ");
		scanf("%f",&a);
		
		if (a >= 0){
			
			b = b + 1;
			soma = soma + a;
			media = soma / b;
		
			if (a <= minimo ){
			minimo = a;
			}
			
			if (minimo == 0 and b == 1){
			minimo = a;
			}
			
			if (a > maximo){
			maximo = a;
			}
		}
	}
	while (a >= 0);
		
		printf("\nA soma dos numeros e igual a %.0f\n",soma);
		printf("A media dos numeros e igual a %.2f\n",media);
		printf("O menor numenor numero foi %.0f\n",minimo);
		printf("O maior numero foi %.0f\n",maximo);
	
	
	return 0;
}
=======
//construa um programa que
//permita a um usuario informar uma serie de numeros, ate que um numero negativo
//seja fornecido. Ao final, imprima o somatorio desses numeros, a media, o valor
//maximo e o minimo. Desconsidere o ultimo numero informado pelo usuario.

#include <stdio.h>

int main(){
	
	float a;
	float b;
	float soma = 0;
	float media;
	float minimo ;
	float maximo ;
		
	do{ 
	
		printf("escreva um numero: ");
		scanf("%f",&a);
		
		if (a >= 0){
			
			b = b + 1;
			soma = soma + a;
			media = soma / b;
		
			if (a <= minimo ){
			minimo = a;
			}
			
			if (minimo == 0 and b == 1){
			minimo = a;
			}
			
			if (a > maximo){
			maximo = a;
			}
		}
	}
	while (a >= 0);
		
		printf("\nA soma dos numeros e igual a %.0f\n",soma);
		printf("A media dos numeros e igual a %.2f\n",media);
		printf("O menor numenor numero foi %.0f\n",minimo);
		printf("O maior numero foi %.0f\n",maximo);
	
	return 0;
}
>>>>>>> 68b0410705ccbe7d4bff9397cbcf0854dd695264
