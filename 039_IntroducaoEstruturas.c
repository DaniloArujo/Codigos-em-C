#include <stdio.h>

int main(void){

    //definiu a estrutura
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    //declarou a estrutura
    struct horario agora;

    //inicialização dos membros das variaveis da minha
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);

    return 0;
}