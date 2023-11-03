#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(void){

    struct node *anchor = NULL;

    struct node *temp = (struct node*)malloc(sizeof(struct node));

    if (temp == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    };

    temp->data = 2;
    temp->link = NULL;

    anchor = temp;

    printf("Data: %i",anchor->data);

    return 0;
}