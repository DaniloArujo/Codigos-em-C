#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void){
    int i;
    struct horario hora[5];

    for(i=0; i<5; i++){
        hora[i].horas = i+2;
        hora[i].minutos = i+3;
        hora[i].segundos = i+4;
    };

    for(i=0; i<5; i++){
        printf("%i:%i:%i\n", hora[i].horas,hora[i].minutos,hora[i].segundos);
    };

    return 0;
}