#include <stdio.h>
#include <stdlib.h>


int main(void){

    system("cls");
    int x = 10;
    double y = 2.8;
    char z = 'a';

    int *pontX;
    pontX = &x;

    double *pontY = &y;

    char *pontZ = &z;

    printf("%p\n",pontX);
    printf("%p\n",pontY);
    printf("%p\n",pontZ);

    printf("%i\n",*pontX);
    printf("%f\n",*pontY);
    printf("%c\n",*pontZ);

    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %p que contem o valor %i\n", pontX, x);
    
    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %p que contem o valor %.2f\n", pontY, y);
    
    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %p que contem o valor %c\n", pontZ, z);
    return 0;
}