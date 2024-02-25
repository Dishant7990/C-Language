#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void printing_nodes(struct node *head){
    if(head == NULL)
        printf("Linked List is empty");
    
    struct node *ptr =  NULL;
    ptr = head;
    static int i = 1;
    while(ptr != NULL){
        printf("Node no. %d is %d\n",i++, ptr->data);
        ptr = ptr->link;
    }
    //printf("%d", count);
}

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main(void){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    
    if(head == NULL){
        printf("Memory not availabe\n");
        exit(1);
    
    }
    head->data = 45;
    head->link = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));

    if(current == NULL){
        printf("Memory not availabe\n");
        exit(1);
    }
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    if(current == NULL){
        printf("Memory not availabe\n");
        exit(1);
    }
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    add_at_end(head, 55);
    add_at_end(head, 37);
    printing_nodes(head);   
    return 0;
}