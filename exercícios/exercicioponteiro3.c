#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
};

void incrementaHoras(struct horario *pointer){
    pointer->horas = 11;
    pointer->minutos = 00;
}

int main(void){

    struct horario atual;
    struct horario *pontAtual;
    pontAtual = &atual;
    
    pontAtual->horas = 10;
    pontAtual->minutos = 59;

    system("cls");
    printf("%02i:%02i\n",pontAtual->horas,pontAtual->minutos);

    incrementaHoras(pontAtual);
    printf("%02i:%02i\n",pontAtual->horas,pontAtual->minutos);

    return 0;   
}