//faca um programa que leia 5 valores inteiros, armazene-os em um vetor, calcule e apresente a soma
//a media, e aqueles que sao maiores e menores que a media

#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor[5],i,soma = 0;
	float media;
	
	for(i = 0; i < 5; i++){
		printf("Qual o %do valor?\n",i+1);
		scanf("%d",&valor[i]);
	
		soma = soma + valor[i];
	}
	
	printf("\nA soma vale %d\n",soma);
	
	media = soma / 5;
	printf("\nA media vale %.2f\n",media);
	
	printf("\nOs seguintes valores sao maiores que a media:\n");
	for(i = 0; i < 5; i++)
		if(valor[i] > media)
		printf("%d\n",valor[i]);
	
	printf("\nOs seguintes valores sao menores que a media:\n");
	for(i = 0; i < 5; i++)
		if(valor[i] < media)
		printf("%d\n",valor[i]);
	
	system("pause");
	return 0;	
}
