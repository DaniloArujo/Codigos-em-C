#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
}atual,teste = {10,20,30};

int main(void){
    atual.horas = 60;
    atual.minutos = 40;
    atual.segundos = 12;
    printf("%i:%i:%i\n",atual.horas, atual.minutos, atual.segundos);
    
    printf("%i:%i:%i\n",teste.horas, teste.minutos, teste.segundos);

    struct horario amanha = {2,3,7};    
    printf("%i:%i:%i\n",amanha.horas, amanha.minutos, amanha.segundos);


    struct horario depois = {.segundos = 50, .minutos = 4};
    
    printf("%i:%i:%i\n",depois.horas, depois.minutos, depois.segundos);
    
    system("pause");
    return 0;
}