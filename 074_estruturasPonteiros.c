#include <stdio.h>


int main(void){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora;
    struct horario *Pont_agora;

    Pont_agora = &agora;

    //duas maneiras de acessar os dados da estrutura via ponteiro.
    Pont_agora -> hora = 20;
    (*Pont_agora).minuto = 40;
    (*Pont_agora).segundo = 80;

    printf("%i,%i,%i\n",agora.hora,agora.minuto,agora.segundo);

    return 0;
}