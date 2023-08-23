#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade1, idade2, idade3, idade4;
	
	idade1 = 20;
	idade2 = 40;
	idade3 = 45;
	idade4 = 15;
		
	int idadetotal;
	
	idadetotal = idade1 * idade2 - idade3 / idade4;
	
	printf("%i\n",idadetotal);
	
	system("pause");
	return 0;
}
