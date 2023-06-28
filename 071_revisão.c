#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_PALAVRA 30
#define MAX_DEFINICAO   50
#define NUM_TERMOS 5

struct dicionario{
    char palavra[MAX_PALAVRA];
    char definicao[MAX_DEFINICAO];
};

bool comparaStrings( char string1[], char string2[]){
    int i = 0;
    while((string1[i] == string2[i])&&(string1[i] != '\0')&&(string2[i] != '\0')){
        i++;
    };
    if((string1[i] == '\0')&&(string2[i] == '\0')){
        return true;
    }else{
        return false;
    }
};

int procuraTermos(struct dicionario sentencas[],char sentenca[], int numeroSentencas){
    int i;
    int resultado = -1;
    for(i = 0; i< numeroSentencas; i++){
        if(comparaStrings(sentenca,sentencas[i].palavra)){
            resultado = i;
            break;
        }
    }
    return resultado;
};


int main(void){

    const struct dicionario lista[NUM_TERMOS] = {
        {"arroz","branco"},
        {"feijao","marrom"},
        {"alface","verde"},
        {"tomate","vermelho"},
        {"abobora","laranjada"},
    };

    char palavraAProcurar[MAX_PALAVRA];
    int resultadoPesquisa;

    while (true){
        printf("Escreva um termo a ser procurado: ");
        scanf("%s", palavraAProcurar);

        if(comparaStrings(palavraAProcurar,"cls")){
            break;
        }

        resultadoPesquisa = procuraTermos(lista, palavraAProcurar, NUM_TERMOS);

        if(resultadoPesquisa != -1){
            printf("%s\n",lista[resultadoPesquisa].definicao);
        }else{
            printf("Palavra nao encontrada\n");
        }

    }
    return 0;
}