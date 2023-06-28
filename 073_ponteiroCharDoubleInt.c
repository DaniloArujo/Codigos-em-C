#include <stdio.h>

int main(void){

    int x = 10;
    double y = 3.14;
    char z = 'a';
    

    //importante!!!
    int *Px;
    Px = &x;

    double *Py = &y;

    char *Pz = &z;


    printf("Endereco x = %i - Valor x = %i\n",Px, *Px);
    
    printf("Endereco x = %i - Valor x = %f\n",Py, *Py);
    
    printf("Endereco x = %i - Valor x = %c\n",Pz, *Pz);

    return 0;
}