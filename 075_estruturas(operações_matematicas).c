#include <stdio.h>
#include <stdlib.h>



int main(void){
    
    system("cls");

    struct horario{
    int horas;
    int minutos;
    int segundos;
    };

    struct horario agora, *depois;
    depois = &agora;

    depois -> horas = 10;
    depois -> minutos = 20;
    depois -> segundos = 30;

    int somatorio = 100;

    struct horario antes;

    antes.horas = somatorio + (depois -> horas);
    antes.minutos = somatorio + (depois -> minutos);
    antes.segundos = somatorio + (depois -> segundos);

    printf("agora = %i,%i,%i\n",agora.horas,agora.minutos,agora.segundos);
    
    printf("antes = %i,%i,%i\n",antes.horas,antes.minutos,antes.segundos);



    getchar();
    return 0;
}