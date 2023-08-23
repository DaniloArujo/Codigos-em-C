#include <stdio.h>
#include <stdlib.h>

int main(void){

    void concatenaString(   char string1[], int t1,
                            char string2[], int t2,
                            char string3[]);
            
    char palavra1[] = {'p','a','o',' '};
    char palavra2[] = {'m','o','r','t','a','d','e','l','a'};
    char novaPalavara[13]; 
    int i;

    concatenaString(palavra1,4,palavra2,9,novaPalavara);

    for(i=0;i<13;i++){
        printf("%c",novaPalavara[i]);
    }

    system("pause");
    return 0;
}

void concatenaString(char string1[], int t1, char string2[], int t2,char string3[]){
    int i, j;

    for(i=0;i<t1;i++){
        string3[i] = string1[i];
    };
    for(j=0; j<t2; j++){
        string3[t1+j] = string2[j];
    };
}
