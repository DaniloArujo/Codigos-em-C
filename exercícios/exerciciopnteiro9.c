#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

void atualizahorario(struct horario *aatualizar){
    aatualizar->horas++;
    aatualizar->minutos++;
    aatualizar->segundos++;
};

int main(void){
    system("cls");

    struct horario atual;
    struct horario *pontAtual = &atual;

    atual.horas = 0;
    atual.minutos = 0;
    atual.segundos = 0;

    printf("%i,%i,%i\n",atual.horas,atual.minutos,atual.segundos);
    printf("%i,%i,%i\n",pontAtual->horas,pontAtual->minutos,pontAtual->segundos);
    printf("%p\n",pontAtual);

    atualizahorario(pontAtual);

    printf("%i,%i,%i\n",atual.horas,atual.minutos,atual.segundos);
    printf("%i,%i,%i\n",pontAtual->horas,pontAtual->minutos,pontAtual->segundos);
    printf("%p\n",pontAtual);

    system("pause");
    return 0;
}
