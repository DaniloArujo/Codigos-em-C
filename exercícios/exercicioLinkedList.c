#include <stdio.h>

struct node{
    int data;
    struct node* next;
};

void insert(struct node** head, int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Falha ao alocar memoria");
        return;
    }else{
        temp->data = data;
        temp->next = *head;
        *head = temp
    ;}
};


void print(struct node** head){
    struct node* temp = *head;
    while(temp != NULL){
        printf("%i",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void){

    int sizeOfList;
    int loop;


    struct node* head;
    head = NULL;

    printf("Deseja adicionar quantos ?: ");
    scanf("%i",&sizeOfList);

    for(loop = 0; loop<sizeOfList; loop++){
        int valor;

        printf("insira um numero no inicio: ");
        scanf("%i", &valor);

        insert(&head,valor);
        print(&head);
    };

    return 0;
}