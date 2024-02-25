#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

//ADDING THE NODE AT THE BEGINNING OF THE LIST
void add_beg(struct node **head, int d){
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}

int main(void){
    struct node *head = malloc(sizeof(struct node));
    if(head == NULL){
        printf("Memory not availabe\n");
        exit(1);
    }
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Memory not availabe\n");
        exit(1);
    }
    ptr->data = 98;
    ptr->link = NULL;

    head->link = ptr;

    int data = 3;
    add_beg(&head, data);
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
    return 0;
}