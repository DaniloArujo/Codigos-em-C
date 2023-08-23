#include<stdio.h>
#include <stdlib.h>

int main(void){
	
	int matriz[5][5] = {{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5}};
	int m;				
	int n;
						
	for(m = 0; m < 5; ++m){
		for(n = 0; n < 5; n++){
			printf("%i",matriz[m][n]);
		
		}
		printf("\n");
	
	}
	system("pause");
	return 0;
}
