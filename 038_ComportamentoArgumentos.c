#include <stdio.h>
#include <stdlib.h>

int main(void){

    void FuncaoPrint(int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10};

    //ao passar um int, double, float etc estamos criando uma cópia da variável que foi passado. e essas duas variáveis são independentes. caso queiramos modificar a variável na funcção principal devemos retornar.
    //ao passar um vetor, uma matriz estamos passando os endereços de memória, então estamos passando o vetor em si. se você altera dentro da função você altera em todo o código.
    FuncaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %i \n",x);
    printf("Vetor na funcao principal = %i\n",vetor[1]);
    
    system("pause");
    return 0;
}

void FuncaoPrint(int x, int vetor[]){

    x = x + 10;
    vetor[1] = 20;

    
    printf("Variavel int na funcao print = %i \n",x);
    printf("Vetor na funcao print = %i\n",vetor[1]);

}