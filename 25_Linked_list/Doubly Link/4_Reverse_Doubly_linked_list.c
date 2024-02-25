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


struct node* creareList(struct node* head){
    int n, data, i;
    printf("Enter the number of nodes: \n");
    scanf("%d", &n);

    if(n == 0)
        return head;
    
    printf("Enter the element for the node 1: \n");
    scanf("%d", &data);
    head = addToEmpty(head, data);

    for(i = 1; i<n; i++){
        printf("Enter the element for the node %d: \n", i+1);
        scanf("%d", &data);
        head = addAtEnd(head, data);
    }
    return head;
}

struct node* reverse(struct node* head){
    struct node* ptr1 = head;
    struct node* ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;

    while(ptr2 != NULL){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }

    head = ptr1;
    return head;

}

void print(struct node* head){
    struct node* ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(void){
    struct node* head = NULL;
    struct node* ptr;
    head = creareList(head);
    printf("---------Before Reverse Linked List---------\n");
    print(head);
    
    head = reverse(head);
    printf("---------After Reverse Linked List---------\n");
    print(head);

    return 0;
}