#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_pos(struct node* head, int data, int pos){
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

void add_at_end(struct node* head,int data){
    struct node *ptr, *temp;
    ptr = head;
    temp == NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory not allocated to temp");
        exit(1);
    }
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void printing_nodes(struct node *head){
    if(head == NULL)
        printf("----Linked List is empty----");

    struct node *ptr = NULL;
    ptr = head;
    static int i = 1;
    while (ptr != NULL)
    {
        printf("Node no. %d is %d\n", i++, ptr->data);
        ptr = ptr->link;
    }
    
}


int main(void){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Memory was not allocated!!!");
        exit(1);
    }
    head->data = 48;
    head->link = NULL;

    struct node *ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 50;
    ptr->link = NULL;

    head->link = ptr;

    add_at_end(head, 23);
    add_at_end(head, 14);
    add_at_pos(head, 10, 2);
    printing_nodes(head);
    return 0;
}