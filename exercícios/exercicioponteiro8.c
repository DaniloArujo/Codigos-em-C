#include <stdio.h>


struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void){

    struct horario atual;
    struct horario *pontAtual = &atual;

    pontAtual -> horas = 10;
    pontAtual -> minutos = 10;
    pontAtual -> segundos = 10;

    printf("%i,%i,%i\n",pontAtual->horas,pontAtual->minutos,pontAtual->segundos);

    struct horario depois;

    depois.horas = pontAtual->horas + 10;
    depois.minutos = (*pontAtual).minutos + 10;
    depois.segundos = pontAtual->segundos + 10;

    printf("%i,%i,%i\n",depois.horas,depois.minutos,depois.segundos);

    getchar();
    return 0;
}