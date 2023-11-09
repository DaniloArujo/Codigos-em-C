//inserindo node no final otimizado

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void insertAtEnd(struct node** head, struct node** last, int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(*head == NULL){
        *head = temp;
        *last = temp;
        return;
    };

    (*last)->next = temp;
    *last = temp;
};

void printFullList(struct node* head){
    while(head != NULL){
        printf("%i, ",head->data);
        head = head->next;
    }
    printf("\n");
};

int main(void){

    struct node* head = NULL;
    struct node*last = NULL;

    int numbersToInsert;
    printf("how mani numbers to insert ?");
    scanf("%i",&numbersToInsert);

    int loop;
    int number;
    for(loop = 0; loop < numbersToInsert; loop++){
        
        printf("Number to insert: ");
        scanf("%i",&number);

        insertAtEnd(&head,&last,number);
        printFullList(head);
    };



    return 0;
}
