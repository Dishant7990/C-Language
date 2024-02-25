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
        return; // Add return statement here
    }
    struct node *ptr = head;
    int j = 1;
    while (ptr != NULL)
    {
        printf("Node no. %d is %d\n", j++, ptr->data);
        ptr = ptr->link;
    }
}


int main(void){
    int n;
    printf("Enter How many node you want create :\n");
    scanf("%d", &n);

    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));

    printf("Enter data of node %d : \n", 1); // start with 1
    scanf("%d",&head->data); // read data for the first node
    
    head->link = NULL; // initialize link of first node to NULL
    
    for(int i = 2; i <= n; i++){ // start loop from 2
        int data;
        printf("Enter data of node %d : \n", i);
        scanf("%d",&data);
        insert_node(head,data);
    }

    printf("----------Original List---------\n");
    printing_nodes(head);

    struct node *ptr = head;

    struct node *p, *q;
    int temp;
    for(p = ptr; p != NULL; p = p->link){
        for(q = p->link; q != NULL; q = q->link){
            if(p->data < q->data){
                    temp = p->data;
                    p->data = q->data;
                    q->data = temp;
            }
        }
    }

    printf("----------Sort List---------\n");
    printing_nodes(ptr);

    
    return 0;
}