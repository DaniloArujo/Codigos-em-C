#include <stdio.h>

int main(){
	
	int i = 0;
	int vetor[6] = {1,0,5,-2,-5,7};
	int soma = 0;
	
	vetor[3] = 100;
	
	soma = vetor[0] + vetor [1] + vetor [3];
	
	for (i = 0; i < 6; i++ ){
		
		printf("%i\n",vetor[i]);
	}
	return 0;
}
