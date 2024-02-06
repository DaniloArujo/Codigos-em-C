#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
};

void printList(struct node** p){
    if(*p == NULL){
        printf("Empty list");
    }else{
        struct node* temp = *p;
        while(temp != NULL){
            printf("%i ",temp->value);
            temp = temp->next;
        };
        printf("\n");
    };

};

void insertAtBeginning(struct node** p, int number){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Memory Allocattion failure");
        return;
    }else{
        newNode->value = number;
        newNode->next = *p;
        *p = newNode;
    }
};

int main(void){

    struct node* list = NULL;

    insertAtBeginning(&list, 6);
    printList(&list);
    insertAtBeginning(&list, 12);
    printList(&list);
    insertAtBeginning(&list, 9);
    printList(&list);
    insertAtBeginning(&list, 8);
    printList(&list);
    insertAtBeginning(&list, 5);
    printList(&list);
    insertAtBeginning(&list, 2);
    printList(&list);

    return 0;
}