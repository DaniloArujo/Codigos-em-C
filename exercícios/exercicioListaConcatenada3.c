#include <stdio.h>

struct node{
    int data;
    struct node* next;
};

void addNode(int data, struct node** head){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("memory allocation error");
        return;
    };
    if(*head == NULL){
        *head = temp;
        return;
    }
    while(){

    };
};

int main(void){

    struct node* head;

    addNode(3,&head);

    return 0;
}