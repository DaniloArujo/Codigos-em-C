#include <stdio.h>
#include <stdio.h>
#include <time.h>

/*
Faça um programa que imprima na tela a diagonal principal de uma matriz 5x5.
*/


int main(void){
    srand(time(NULL));
    int matriz[5][5];
    int diagonal[5];
    int segundadiagonal[5];
    int linha, coluna;

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            matriz[linha][coluna] = rand() % 100;
        };
    }

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("%2i ",matriz[linha][coluna]);
        };
        printf("\n");
    }

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna ++){
            if(linha == coluna){
                diagonal[linha] = matriz[linha][coluna];
            }
        };
    }
    
    for(linha = 0; linha <5; linha++){
        segundadiagonal[linha] = matriz[linha][4-linha];
    };



    printf("\n");
    printf("#########################");
    printf("\n");

    for(linha = 0; linha <5; linha++){
        printf("%2i ", diagonal[linha]);
    }


    printf("\n");
    printf("#########################");
    printf("\n");

    for(linha = 0; linha <5; linha++){
        printf("%2i ", segundadiagonal[linha]);
    }

    return 0;
}