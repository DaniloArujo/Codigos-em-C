#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

void atribuiHorario(struct horario *horarioAMudar){
    static int contador = -1;
    static int contadorMinutos = 0;
    static int contadoHoras = 0;

    contador ++;
    horarioAMudar->segundos = contador;
    horarioAMudar->minutos = contadorMinutos;
    horarioAMudar->horas = contadoHoras;

    if(contador == 59){
        contador = -1;
        contadorMinutos ++;
    };
    if(contadorMinutos == 59){
        contadorMinutos = 0;
        contadoHoras ++;
    };
    if(contadoHoras == 24){
        contadoHoras = 0;
    };
};


void pintraHorario(struct horario *horaAPrintar){
    printf("%i:%i:%.2i\n",horaAPrintar->horas,
                           horaAPrintar->minutos,
                           horaAPrintar->segundos);
};

int main(void){
    
    int contador = 0;
    struct horario atual, *pontAtual;
    pontAtual = &atual;

    pontAtual->horas = 0;
    pontAtual->minutos = 0;
    pontAtual->segundos = 0;

    while( contador < 3000 ) {
        
        atribuiHorario(pontAtual);
        pintraHorario(pontAtual);

        contador ++ ;  
    };


    system("pause");
    return 0;
}