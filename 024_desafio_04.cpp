 //escreva um programa que leia 5 numeros inteiros, armazene-os em um vetor, calcule e apresente a soma,
//a m�dia, e aqueles que s�o menores e maiores que a m�dia. 

#include <stdio.h>

int main(){
	
	int valor[5], i, soma = 0;
	float media;
	
	for (i = 0; i < 5; i++){
		printf("QUal o %do valor ?\n",i+1);
		scanf("%d",&valor[i]);
		
		soma = soma + valor[i];
	}
	printf("\nA soma vale: %d\n",soma);
		
	media = soma / 5;
	
	printf("\nA media vale: %.2f\n",media);
	
	printf("\nOs seguintes valores sao maiores que a media: \n");
	
	for(i=0; i<5; i++)
		if(valor[i] > media)
		printf("%d\n",valor[i]);
		
	printf("\nOs seguintes valores sao menores que a media: \n");
	
	for(i=0; i < 5; i++)
		if(valor[i]<media)
		printf("%d\n", valor[i]);
		
	return 0;

}
