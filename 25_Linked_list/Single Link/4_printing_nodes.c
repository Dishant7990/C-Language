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
    
    printing_nodes(head);   
    return 0;
}