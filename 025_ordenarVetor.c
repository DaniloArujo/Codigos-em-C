#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[100];
	int i, n, menor, ordenadas, temp;
	
	printf("N:");
	scanf("%i",&n);
	
	for(i = 0; i < n; i++)
		scanf("%d",&vetor[i]);
		
	ordenadas = -1;
	
	do{
		ordenadas++;
		
		menor = ordenadas;
		
		for(i=ordenadas+1;i<n;i++)
			if(vetor[i]<vetor[menor])
				menor = i;
				
		temp = vetor[ordenadas];
		vetor[ordenadas] = vetor[menor];
		vetor[menor] = temp;
	}
	while(ordenadas<n);
	
	for(i=0;i<n;i++)
		printf("%i\n",vetor[i]);		

	system("pause");	
}
