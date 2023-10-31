#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *file;
    file = fopen("..\\teste.txt","r");

    if(file == NULL){
        printf("arquivo nao encontrado\n");
        return 0;
    };

    int x, y, z;

    fscanf(file,"%i,%i,%i",&x,&y,&z);

    printf("%i,%i,%i\n",x,y,z);

    fclose(file);

    system("pause");
    return 0;
}