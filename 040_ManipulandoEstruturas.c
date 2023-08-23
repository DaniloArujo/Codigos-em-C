#include <stdio.h>
#include <stdlib.h>

int main(void){

    //definiu a estrutura
    struct horario{
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };

    //declarou a estrutura
    struct horario agora;
    //inicialização dos membros das variaveis da minha
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 7;
    depois.letra = 'a';


    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
    printf("horas: %i, minutos: %i, teste: %f, letra: %c",depois.horas, depois.minutos, depois.teste, depois.letra);

    system("pause");
    return 0;
}