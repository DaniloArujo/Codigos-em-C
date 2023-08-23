#include <stdio.h>
#include <stdlib.h>



int main(void){
    system("cls");    

    int horas = 10;
    int minutos = 30;
    int segundos = 20;
    
    struct horario{
        int *pontHoras;
        int *pontMinutos;
        int *pontSegundos;
    };

    struct horario agora;

    agora.pontHoras = &horas;
    agora.pontMinutos = &minutos;
    agora.pontSegundos = &segundos;

    
    printf("Hora: - %i\n", *agora.pontHoras);
    printf("Minuto: - %i\n",*agora.pontMinutos);
    printf("Segundo: - %i\n",*agora.pontSegundos);

    *agora.pontSegundos = 1000;
    
    printf("Segundo: - %i\n",*agora.pontSegundos);
    
    printf("Segundo endereco : - %p\n",agora.pontSegundos);

    getchar();
    return 0;
}