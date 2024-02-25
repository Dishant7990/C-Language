#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insert_node(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    
}

void printing_nodes(struct node *head){
    if(head == NULL){
        printf("Linked List is empty...!!\n");
        exit(1);
    }

    struct node *ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;

    for(int i = 1; ptr != NULL; i++){
        printf("Node no. %d is %d\n", i, ptr->data);
        ptr = ptr->link;
    }
}

struct node* reverse(struct node *head){
    struct node *next = NULL;
    struct node *prev = NULL;

    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
    
}


int main(void){
    int n;
    printf("How many nodes do you want create ?\n");
    scanf("%d", &n);

    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Memory allocation fail....\n");
        exit(1);
    }

    printf("Enter data of node %d : \n",1);
    scanf("%d", &head->data);
    head->link = NULL;

    for (int i = 2; i<=n; i++)
    {
        int data;
        printf("Enter data of node %d : \n",i);
        scanf("%d", &data);
        insert_node(head, data);
    }

    printf("--------------- Linked List --------------\n");
    printing_nodes(head);
    
    printf("-----------Reverse Linked List -----------\n");
    head = reverse(head);
    printing_nodes(head);
    
    return 0;
}