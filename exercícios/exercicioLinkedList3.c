#include <stdio.h>
#include <stdlib.h>

// Node structure for a singly linked list
struct node {
    int value;
    struct node* next;
};

// Function to print the elements of the linked list
void printList(struct node** p) {
    if (*p == NULL) {
        printf("Empty list");
    } else {
        struct node* temp = *p;
        while (temp != NULL) {
            printf("%i ", temp->value);
            temp = temp->next;
        };
        printf("\n");
    };
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct node** p, int number) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory Allocation failure");
        return;
    } else {
        newNode->value = number;
        newNode->next = *p;
        *p = newNode;
    }
};

// Function to insert a new node at the end of the linked list
void insertingAtEnd(struct node** p, int number) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    if (new == NULL) {
        printf("Memory Allocation failure");
        return;
    }
    new->value = number;
    new->next = NULL;

    if (*p == NULL) {
        (*p) = new;
    } else {
        struct node* temp = *p;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

// Function to delete the last node from the linked list
void deletelastNode(struct node** p) {
    if(*p == NULL || (*p)->next == NULL){
        free(*p);
        *p = NULL;
        return;
    }
    struct node* temp = *p;
    struct node* temp2 = NULL;

    while (temp->next != NULL) {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    free(temp);
};

// Function to delete the first node from the linked list
void DeleteFirstNode(struct node** p) {
    if (*p == NULL) {
        return;
    }
    struct node* temp = *p;
    *p = (*p)->next;
    free(temp);
};

// Function to insert a new node at a specific position in the linked list
void insertAtN(struct node** p, int number, int place) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    if (new == NULL) {
        printf("Memory Allocation failure");
        return;
    }
    new->value = number;
    new->next = NULL;
    if (place == 1) {
        new->next = *p;
        (*p) = new;
        return;
    }
    struct node* temp2 = *p;

    for (int i = 0; i < place - 2 && temp2 != NULL; i++) {
        temp2 = temp2->next;
    }

    if (temp2 == NULL) {
        printf("Invalid place");
        free(new);
        return;
    }

    new->next = temp2->next;
    temp2->next = new;
};

int main(void) {
    // Initialize an empty linked list
    struct node* list = NULL;

    // Inserting at the beginning
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

    // Insert at the end
    insertingAtEnd(&list, 9);
    printList(&list);

    // Deleting the last node
    deletelastNode(&list);
    printList(&list);

    // Deleting the first node
    DeleteFirstNode(&list);
    printList(&list);

    // Insert at a specific position
    insertAtN(&list, 9, 2);
    printList(&list);

    insertAtN(&list, 9, 2);
    printList(&list);

    insertAtN(&list, 9, 2);
    printList(&list);

    return 0;
}
