#include <stdio.h>
#include <stdlib.h>

// Este programa cria uma lista encadeada de elementos, permite ao usuário pesquisar por um valor nessa lista
// e imprime o resultado, indicando se o valor foi encontrado ou não.

struct lista {
    int valor;
    struct lista* next;
};

struct lista* procuravalor(int valor, struct lista* listaPonteiro) {
    // Percorrendo a lista até encontrar o valor ou o final
    while (listaPonteiro != (struct lista*)0) {
        if (listaPonteiro->valor == valor) {
            return listaPonteiro; // Valor encontrado, retornando o ponteiro para a estrutura
        } else {
            listaPonteiro = listaPonteiro->next; // Avançando para o próximo elemento da lista
        }
    }
    return (struct lista*)0; // Valor não encontrado, retornando um ponteiro nulo
}

int main(void) {
    // Criando elementos da lista e inicializando seus valores
    struct lista m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
    m1.valor = 1;
    m2.valor = 2;
    m3.valor = 3;
    m4.valor = 4;
    m5.valor = 5;
    m6.valor = 6;
    m7.valor = 7;
    m8.valor = 8;
    m9.valor = 9;
    m10.valor = 10;

    // Configurando os ponteiros "next" para criar a lista encadeada
    struct lista* hook = &m1;
    m1.next = &m2;
    m2.next = &m3;
    m3.next = &m4;
    m4.next = &m5;
    m5.next = &m6;
    m6.next = &m7;
    m7.next = &m8;
    m8.next = &m9;
    m9.next = &m10;
    m10.next = (struct lista*)0; // O último elemento da lista aponta para NULL

    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);

    // Chamando a função procuravalor para encontrar o valor na lista
    struct lista* resultado = procuravalor(valor, hook);

    if (resultado != NULL) {
        printf("Valor encontrado: %i\n", resultado->valor);
    } else {
        printf("Valor nao encontrado.\n");
    }

    system("pause");
    return 0;
}
