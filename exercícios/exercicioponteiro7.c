#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(void){

    system("cls");

    struct horario atual, *pontAtual;

    pontAtual = &atual;

    (*pontAtual).hora = 10;

    pontAtual->minuto = 20; 

    printf("%i,%i,%i\n",atual.hora,atual.minuto,atual.segundo);


    return 0;
}