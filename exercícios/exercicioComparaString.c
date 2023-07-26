#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXPALAVRA 30
#define MAXDEFINICAO 30
#define TAMANHODICIONARIO 5
#define FINALIZAPROGRAMA "cls"

struct dicionario{
    char palavra[MAXPALAVRA];
    char definicao[MAXDEFINICAO];
};

bool comparastrings(const char palavra1[], const char palavra2[]){
    int i = 0;

    while((palavra1[i] == palavra2[i]) && (palavra1[i] != '\0') && (palavra2[i] != '\0')){
        i++;
    };

    if((palavra1[i] == '\0')&&(palavra2[i] == '\0')){
        return true;
    }else{
        return false;
    };

};

 int procuratermos(const struct dicionario termo[],const char sentenca[],const int numerosentencas){
    int i;
    int resultado = -1;

    for(i = 0; i<numerosentencas; i++){
        if(comparastrings(sentenca,termo[i].palavra)){
            resultado = i;
            break;
        };
    };
    return resultado;
};

int main(void){

    const struct dicionario lista[TAMANHODICIONARIO] = {
        {"Arroz","Branco"},
        {"Feijao","Marrom"},
        {"Abobora","Laranja"},
        {"Laranja","Laranjado"},
        {"Beterraba","Roxa"},
    };

    char procurar[MAXPALAVRA];
    int resultadoPesquisa;

    
    system("cls");
    while(true){
        
        printf("Digite a sentenca a ser pesquisada: ");
        scanf("%s",procurar);

        if(comparastrings(procurar,FINALIZAPROGRAMA)){
            break;
        }

        resultadoPesquisa = procuratermos(lista,procurar,TAMANHODICIONARIO);

        if(resultadoPesquisa != -1){
            printf("%s\n",lista[resultadoPesquisa].definicao);
            
        }else{
            printf("Palavra nao encontrada\n");
            
        }
    }

    return 0;
}