#include <stdio.h>


int main(void){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora;
    struct horario *depois;

    depois = &agora;

    printf("%x,%x,%x\n",agora.hora,agora.minuto,agora.segundo);

    return 0;
}