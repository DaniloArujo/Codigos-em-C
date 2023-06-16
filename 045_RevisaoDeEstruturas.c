#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void){

    struct horario horas[5];
    int i;

    struct horario inicializar(struct horario x,int i);

    for(i=0; i<5; i++){
        horas[i] = inicializar(horas[i], i);
    }

    for(i=0; i<5; i++){
        printf("%i:%i:%i\n", horas[i].horas,horas[i].minutos,horas[i].segundos);
    }
}

struct horario inicializar(struct horario x, int i){

    x.horas = i * 10;
    x.minutos = i * 20;
    x.segundos = i * 30;

    return x;
}