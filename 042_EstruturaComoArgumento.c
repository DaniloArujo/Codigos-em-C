#include <stdio.h>


struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void){

    struct horario teste(struct horario x);

    struct horario atual;
    atual.horas = 12;
    atual.minutos = 60;
    atual.segundos = 40;

    printf("%i:%i:%i\n",atual.horas, atual.minutos, atual.segundos);

    atual = teste(atual);

    
    printf("%i:%i:%i\n",atual.horas, atual.minutos, atual.segundos);


}
struct horario teste(struct horario x){

    x.horas = 2;
    x.minutos = 20;
    x.segundos = 40;
    printf("%i:%i:%i\n",x.horas, x.minutos, x.segundos);
    return x;
}
