#include <stdio.h>
#include <string.h>
#define TAMSTRING 10


struct pessoa {
    char nome[TAMSTRING];
    int idade;
};

populauser(struct pessoa *pontuser){
    char nome[TAMSTRING];
    int idade;
    printf("Entre com o nome do usuario: ");
    scanf("%s", pontuser->nome);

    printf("Entre com a idade:");
    scanf("%i",&(pontuser->idade));
    
}   

int main (void){

    struct pessoa user1;
    struct pessoa user2;

    populauser(&user1);
    populauser(&user2);

    printf("Nome: %s\n",user1.nome);
    printf("Idade: %i\n",user1.idade);
    
    printf("Nome: %s\n",user2.nome);
    printf("Idade: %i\n",user2.idade);
    

    return 0;
}