#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x = 10;
    double y = 3.14;
    char z = 'a';
    

    //importante!!!
    int *Px;
    Px = &x;

    double *Py = &y;

    char *Pz = &z;

    system("cls");
    printf("Endereco x = %i - Valor x = %i\n",Px, *Px);
    
    printf("Endereco x = %i - Valor x = %f\n",Py, *Py);
    
    printf("Endereco x = %i - Valor x = %c\n",Pz, *Pz);


    double soma = *Px + *Py;
    double *Psoma = &soma;

    printf("Endereco soma = %i - valor soma = %f\n", Psoma, *Psoma);

    printf("\n\n\n");
    return 0;
}