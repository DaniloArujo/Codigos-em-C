#include <stdio.h>

struct aluno{
    int nota1;
    int nota2;
};

void geranotas(struct aluno *ponteiro){
    
    printf("Entre com a primeira nota: ");
    scanf("%i",&(ponteiro->nota1));

    printf("Entre com a segunda nota: ");
    scanf("%i",&(ponteiro->nota2));
};

int main(void){

    struct aluno danilo;
    struct aluno *ponteiroDanilo = &danilo;

    geranotas(ponteiroDanilo);

    printf("primeira nota: %i\n",ponteiroDanilo->nota1);
    printf("Segunda nota: %i\n", ponteiroDanilo->nota2);

    return 0;
}