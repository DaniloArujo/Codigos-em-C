//inserindo o node no início

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head; //variável global pode ser acessada de qualquer lugar.

void insert(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
    
};

void print(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%i",temp->data);
        temp = temp->next;
    };
};


int main(void){

    head = NULL; //lista vazia

    int n, i, x;
    printf("how many numbers ?");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Entre com o numero: ");
        scanf("%d",&x);
        insert(x);
    };

    print();

    while (head != NULL) {
        struct node* temp = head;
        head = head->next;
        free(temp);
    };

    return 0;
}