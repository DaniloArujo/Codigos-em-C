#include <stdio.h>

struct node{
    int data;
    struct node* next;
};

void addFirstnode(int data,struct node** head){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("memory error");
        return;
    };
    temp->data = data;
    temp->next = *head;
    *head = temp;

};

void printList(struct node **head){
    struct node *temp = *head;
    while(temp != NULL){
        printf("%i", temp->data);
        temp = temp->next;
    };
    printf("\n");
};

int main(void){

    struct node *head;
    head = NULL;

    int numberOfNodes;
    printf("How mani nodes do you want?");
    scanf("%i",&numberOfNodes);

    int loop;
    for(loop = 0; loop < numberOfNodes; loop++){
        int dataOfNode;
        printf("Enter the data: ");
        scanf("%i",&dataOfNode);
        addFirstnode(dataOfNode,&head);
        printList(&head);
    };



    return 0;
}