#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void){
    int i;
    struct horario hora[5];
    struct horario adicionar(struct horario x);

    for(i = 0; i<5; i++){
        hora[i] = adicionar(hora[i]);
    }

    for(i=0;i<5;i++){
        printf("%i;%i;%i\n",hora[i].horas,hora[i].minutos,hora[i].segundos);
    }
    system("pause");
    return 0;
}

struct horario adicionar(struct horario x){
    printf("Digite um valor para as horas: ");
    scanf("%i",&x.horas);
    printf("Digite um valor para os minutos: ");
    scanf("%i",&x.minutos);
    printf("Digite um valor para os segundos: ");
    scanf("%i",&x.segundos);

    return x;
}