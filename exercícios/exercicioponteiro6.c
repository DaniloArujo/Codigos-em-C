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

    float soma = *pontX + *pontY;

    int *pegadireto;

    pegadireto = 6422280;

    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %i que contem o valor %i\n", pontX, x);
    
    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %p que contem o valor %.2f\n", pontY, y);
    
    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %p que contem o valor %c\n", pontZ, z);
    
    printf("O valor da soma e %.2f\n", soma);

    *pegadireto = 20;
    
    printf("O ponteiro da variavel x aponta para o seguinte espaco de memoria: %i que contem o valor %i\n", pontX, x);

    return 0;
}