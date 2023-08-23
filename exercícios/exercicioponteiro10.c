#include<stdio.h>
#include <stdlib.h>

struct calendario{
    int dia;
    int mes;
    int ano;
};

void adicionadia(struct calendario *adicionar) {
    int max_days = 31;

    if (adicionar->mes == 4 || adicionar->mes == 6 || adicionar->mes == 9 || adicionar->mes == 11) {
        max_days = 30;
    } else if (adicionar->mes == 2) {
        if ((adicionar->ano % 4 == 0 && adicionar->ano % 100 != 0) || (adicionar->ano % 400 == 0)) {
            max_days = 29; 
        } else {
            max_days = 28; 
        }
    }

    if (adicionar->dia < max_days) {
        adicionar->dia++;
    } else {
        adicionar->dia = 1;

        if (adicionar->mes < 12) {
            adicionar->mes++;
        } else {
            adicionar->mes = 1;
            adicionar->ano++;
        }
    }
}

int main(void){
    system("cls");

    struct calendario cristao;
    struct calendario *pontCristao = &cristao;

    pontCristao->dia = 1;
    pontCristao->mes = 1;
    pontCristao->ano = 1;

    while(pontCristao->ano != 2){
        adicionadia(pontCristao);
        printf("%i/%i/%i\n",pontCristao->dia,pontCristao->mes,pontCristao->ano);
    }

    system("pause");
    return 0;
}