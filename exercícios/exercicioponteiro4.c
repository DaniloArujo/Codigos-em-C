#include <stdio.h>
#include <stdlib.h>

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

    system("cls");
    geranotas(ponteiroDanilo);

    system("cls");
    printf("endereco de memoria da stuct: %p\n\n",ponteiroDanilo);
    printf("primeira nota: %i\n",ponteiroDanilo->nota1);
    printf("endereco de memoria da nota1 : %p\n\n",ponteiroDanilo->nota1);
    printf("Segunda nota: %i\n", ponteiroDanilo->nota2);
    printf("endereco de memoria da nota2 : %p\n\n",ponteiroDanilo->nota2);
    

    return 0;
}