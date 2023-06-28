#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_PALAVRA 50
#define MAX_DEFINICAO 50
#define TAMANHODICIONARIO 5

struct dicionario {
    char palavra[MAX_PALAVRA];
    char definicao[MAX_DEFINICAO];
};

bool comparaPalavras(const char palavra1[], const char palavra2[]) {
    int i = 0;
    while ((palavra1[i] == palavra2[i]) && (palavra1[i] != '\0') && (palavra2[i] != '\0')) {
        i++;
    }
    if ((palavra1[i] == '\0') && (palavra2[i] == '\0')) {
        return true;
    } else {
        return false;
    }
}

int procuraStrings(const struct dicionario dict[], const char procurar[], const int numPalavras) {
    int i;
    int resultado = -1;
    for (i = 0; i < numPalavras; i++) {
        if (comparaPalavras(procurar, dict[i].palavra)) {
            resultado = i;
            break;
        }
    }
    return resultado;
}

int main(void) {
    char palavraAProcurar[MAX_PALAVRA];
    int resultadoPesquisa;

    const struct dicionario portugues[TAMANHODICIONARIO] = {
        {"arroz", "branco"},
        {"carne", "marrom"},
        {"abobora", "laranja"},
        {"chiclete", "rosa"},
        {"milho", "amarelo"}
    };

    printf("Digite uma palavra: ");
    scanf("%s", palavraAProcurar);

    resultadoPesquisa = procuraStrings(portugues, palavraAProcurar, TAMANHODICIONARIO);

    if (resultadoPesquisa != -1) {
        printf("%s\n", portugues[resultadoPesquisa].definicao);
    } else {
        printf("Palavra não encontrada no dicionário.\n");
    }

    return 0;
}
