#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
    int data;
    struct node* next;
};

void printNodes(struct node* head){
    while(head != NULL){
        printf("%i ", head->data);
        head = head->next;
    }
};

void insertNode(int data, struct node** head){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    *head = temp; 
};

void reverseNodes(struct node** head){
    struct node* current;
    current = *head;
    struct node* prev;
    prev = NULL;
    struct node* next;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev; 


};

int main(void){

    srand(time(NULL));
    struct node* headPointer = NULL;

    for(int loop = 0; loop < 10; loop++){
        int randNumber = rand() %10;
        printf("Numero %i inserido\n",randNumber);
        insertNode(randNumber,&headPointer);
    };

    printNodes(headPointer);

    reverseNodes(&headPointer);

    printf("\n#######################\n");

    printNodes(headPointer);

    return 0;
}
