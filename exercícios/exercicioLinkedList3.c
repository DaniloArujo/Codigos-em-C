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

void insertingAtEnd( struct node** p, int number){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->value = number;
    new->next = NULL;

    if(new == NULL){
            printf("Momory allocation failure");
            return;
        } 

    if(*p == NULL){
        (*p) = new;
    }else{
        struct node *temp = *p; 
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new;
    }

}

//not optimezed way
void deletelastNode(struct node** p){
    if(*p == NULL || (*p)->next == NULL){
        free(*p);
        *p == NULL;
    }
    struct node* temp = *p;
    struct node* temp2 = NULL;

    while (temp->next != NULL){
        temp2 = temp;
        temp = temp->next; 
    }
    temp2->next = NULL;
    free(temp);
    
};


void DeleteFirstNode(struct node** p){
    if(*p == NULL){
        return;
    }
    struct node *temp = *p;
    *p = (*p)->next;
    free(temp);
};

void insertAtN(struct node** p, int number, int place){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL){
        printf("Memory allocation failure");
    }
    new->value = number;
    new->next = NULL;
    if(number == 1){
        new->next = *p;
        (*p) = new;
        return;
    };
    struct node *temp2 = *p;

    for(int i = 0; i < place - 2 && temp2 != NULL; i++){
        temp2 = temp2->next;
    };

    if(temp2 == NULL){
        printf("Invalid place");
        free(new);
        return;
    };

    new->next = temp2->next;
    temp2->next = new;
};


int main(void){

    struct node* list = NULL;

    //inserting
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

    insertingAtEnd(&list,9);
    printList(&list);

    //deleting
    deletelastNode(&list);
    printList(&list);

    DeleteFirstNode(&list);
    printList(&list);

    insertAtN(&list,9,2);
    printList(&list);
    
    insertAtN(&list,9,2);
    printList(&list);
    
    insertAtN(&list,9,2);
    printList(&list);
    return 0;
}