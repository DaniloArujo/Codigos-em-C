#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct node{
    int data;
    struct node *next;
};

void insert(struct node** head, int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    *head = temp;

};

void printNodes(struct node* head){
    while (head != NULL){
        printf("%i ",head->data);
        head = head->next;  
    };
    
};

void reversePrintNodes(struct node* head){
    if(head == NULL){
        return;  
    };
    reversePrintNodes(head->next);
    printf("%i ",head->data);
};

int main(void){

    srand(time(NULL));
    int randNumber;
    struct node* headPointer = NULL;


    for(int loop = 0; loop <10; loop++){
        randNumber = rand() % 10;

        insert(&headPointer,randNumber);
        printf("Numero %i adicionado a lista.\n",randNumber);

    };

    
    printNodes(headPointer);
    printf("\n");
    reversePrintNodes(headPointer);

    while (headPointer != NULL) {
        struct node* temp = headPointer;
        headPointer = headPointer->next;
        free(temp);
    }
    
    return 0;
}