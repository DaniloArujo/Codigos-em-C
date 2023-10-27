#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};

struct node *search(struct node *list, int number){
    while(list != NULL){
        if(list ->value == number){
            return list;
        }else{
            list = list->next;
        }
    }
    return NULL;
};

int main(void){

    int number= 0;

    struct node m1,m2,m3,m4,m5;
    struct node *head = &m1;

    m1.value = 2;
    m1.next = &m2;

    m2.value = 3;
    m2.next = &m3;

    m3.value = 4;
    m3.next = &m4;

    m4.value = 5;
    m4.next = &m5;

    m5.value = 6;
    m5.next = NULL;


    printf("entre com o numero que deseja procurar: ");
    scanf("%i",&number);

    

    if((search(head,number))== NULL){
        printf("O valor não está na lista\n");
    }else{
        printf("valor %i encontrado no endereco %p\n",(search(head,number)->value),(search(head,number)->next));
    }

    system("pause");
    return 0;
}