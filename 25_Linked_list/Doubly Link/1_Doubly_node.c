#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* addToEmpty(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addAtBeg(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

struct node* addAtEnd(struct node* head, int data){
    struct node* temp, *tp;
    temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    
    tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;
    
}

struct node* addAfterPos(struct node* head, int data, int position){
    struct node* newP = NULL;
    struct node* temp = head;
    struct node* temp2 = NULL;
    newP = addToEmpty(newP, data);

    while (position != 1)
    {
        temp = temp->next;
        position--;
    }
    
    temp2 = temp->next;
    temp->next = newP;
    temp->prev = newP;
    newP->next = temp2;
    newP->prev = temp;
    return head;

}

struct node* addBeforePos(struct node* head, int data, int position){
    struct node* newP = NULL;
    struct node* temp = head;
    struct node* temp2 = NULL;
    newP = addToEmpty(newP, data);
    int pos = position;
    while (pos != 2)
    {
        temp = temp->next;
        pos--;
    }
    
    temp2 = temp->next;
    temp->next = newP;
    temp->prev = newP;
    newP->next = temp2;
    newP->prev = temp;
    return head;

}


int main(void){
    struct node* head = NULL;
    struct node* ptr;
    head = addToEmpty(head, 45);// Create a node

    head = addAtBeg(head, 55);//Become 1st Node

    head = addAtEnd(head, 60); // Add a Node at end

    head = addAfterPos(head, 24, 2);

    head = addBeforePos(head, 69, 4);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}