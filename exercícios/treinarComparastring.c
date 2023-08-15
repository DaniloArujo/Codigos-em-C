#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXPALAVRA 20
#define MAXDEFINICAO 50
#define NUMSTRUCTS 5
#define FINALIZAPROGRAMA "cls"

struct dicionario{
    char palavra[MAXPALAVRA];
    char definicao[MAXDEFINICAO];
};

bool comparapalavras(const char palavra1[], const char palavra2[]){
    int i = 0;
    while((palavra1[i] == palavra2[i]) && (palavra1[i] != '\0') && (palavra2[i] != '\0')){
        i++;
    }
    if((palavra1[i] == '\0')&&( palavra2[i] == '\0')){
        return true;
    }else{
        return false;
    };
};

int procuratermos(struct dicionario termos[], const char sentenca[], const int numerodetermos){
    int i;
    int resultado = -1;

    for(i = 0; i < numerodetermos; i++){
        if(comparapalavras(sentenca,termos[i].palavra)){
            resultado = i;
            break;
            
        };
    };
    return resultado;
}

int main(void){

struct dicionario lista[NUMSTRUCTS] ={
    {"arroz","branco"},
    {"feijao","marrom"},
    {"abobora","laranjada"},
    {"beterraba","roxa"},
    {"abacate","verde"}
};

char procurar[MAXPALAVRA];
int resultadoPesquisa;


while(true){
    printf("Entre com a palavra a ser procurada: \n");
    scanf("%s",procurar);
    system("cls");

    if(comparapalavras(procurar, FINALIZAPROGRAMA )){
        system("cls");
        break;
    };

    resultadoPesquisa = procuratermos(lista, procurar,NUMSTRUCTS);

    if(resultadoPesquisa != -1){
        printf(lista[resultadoPesquisa].definicao);
        printf("\n");
    }else{
        printf("Palavra nao encontrada\n");
    }
    
}

return 0;
}