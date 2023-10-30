#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x = 1;
    int y = 0;

    y = ++x;

    printf("x = %i\n",x);
    printf("y = %i\n",y);

    printf("###################################\n");

    x = 1;
    y = 0;

    y = x++;

    printf("x = %i\n",x);
    printf("y = %i\n",y);


    system("pause");
    return 0;
}