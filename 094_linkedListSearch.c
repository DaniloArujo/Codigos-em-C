//Excluindo o ultimo nó

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void insertAtN(struct node** head, int data, int n){
    struct node* temp = (struct node*)malloc(sizeof(struct node));

    if (temp == NULL) {
        // Handle memory allocation failure
        return;
    }

    temp->data = data;
    temp->next = NULL;
    
    if(n == 1){
        temp->next = *head;
        *head = temp;
        return;
    }
    struct node* temp2 = *head;

    for(int i = 0; i < n-2; i++){
        temp2 = temp2->next;
    };

    temp->next = temp2->next;
    temp2->next = temp;

};

void printList(struct node* head){
    while(head != NULL){
        printf("%i ",head->data);
        head = head->next;
    };
    printf("\n");
};

int searchData(struct node* head, int data){
    if(head == NULL){
        return 0;
    };
    int numberOfCases = 0;

    while (head != NULL){
        if(head->data == data){
            numberOfCases ++;
        }
        head = head->next;
    }
    

    return numberOfCases;
};

int main(void){

    struct node* head;
    head = NULL;


    insertAtN(&head,2,1); // 2
    insertAtN(&head,3,2); // 2,3
    insertAtN(&head,4,1); // 4,2,3
    insertAtN(&head,5,2); // 4,5,2,3
    insertAtN(&head,3,4); // 4,5,2,3,3
    insertAtN(&head,6,2); // 4,6,5,2,3,3
    insertAtN(&head,2,1); // 2,4,6,5,2,3,3

    printList(head);
    printf("######################\n");

    
    int numberofcases = searchData(head, 3);

    printf("number of cases: %i",numberofcases);

    return 0;
}