//inserindo o node no final
#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node* next;
};


void insert(struct node** head, int value){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    struct node* last = *head;
    temp->data = value;
    temp->next = NULL;
    if(*head == NULL){
        *head = temp;
        return;
    }

    while( last->next != NULL){
        last = last->next;
    };
    last->next = temp;
};

void printList(struct node* head){
    while(head != NULL){
        printf("%i",head->data);
        head = head->next;
    }
    printf("\n");
};

int main(void){

    struct node* head;
    head = NULL;

    int numberOfNodes;
    printf("how many nodes to insert ?");
    scanf("%d",&numberOfNodes);

    int loop;
    for(loop = 0; loop < numberOfNodes; loop++){
        int valueOfNode;
        printf("Insert value: ");
        scanf("%i", &valueOfNode);

        insert(&head, valueOfNode);

        printList(head);
    };

    return 0;
}