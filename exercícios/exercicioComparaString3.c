#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAMANHOPALAVRA 20
#define TAMANHODEFINICAO 50
#define TAMANHOLISTA 5


struct dicionario{
    char palavra[TAMANHOPALAVRA];
    char definicao[TAMANHODEFINICAO];
};


bool comparaString(const char palavra1[], const char palavra2[]){
    int i = 0;
    while((palavra1[i] == palavra2[i]) && (palavra1[i] != '\0') && (palavra2[1] != '\0')){
        i++;
    };
    if((palavra1[i] == '\0')&&(palavra2[1] == '\0')){
        return true;
    }
    else{
        return false;
    };
}

int procuraTrmos(struct dicionario dict[], const char termo, const int tamanho){
    int i = -1;
    int resultado = -1;
    for (i = 0; i < tamanho; i++){
        if(comparaString(dict[i].palavra,termo)){
            resultado = i;
            break;
        }
        
    }

    return resultado;
}


int main(void){

    struct dicionario lista[TAMANHOLISTA] = {
        {"arroz","branco"},
        {"feijao","marrom"},
        {"abobora","laranjado"},
        {"beterraba","roxo"},
        {"couve","verde"},
    };

    return 0;
}