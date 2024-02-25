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

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    
}

void printing_nodes(struct node *head){
    if(head == NULL){
        printf("Linked List is empty...\n");
        exit(1);
    }

    struct node *ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Linked List is empty...\n");
        exit(1);
    }
    ptr = head;
    
    int i = 1;
    while (ptr != NULL)
    {
        printf("Node no. %d is %d\n", i++, ptr->data);
        ptr = ptr->link;
    }
    
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
    printf("Enter data of node %d :\n", 1);
    scanf("%d", &head->data);
    head->link = NULL;

    for(int i = 2; i<=n; i++){
        int data;
        printf("Enter data of node %d : \n", i);
        scanf("%d",&data);
        insert_node(head,data);
    }

    printf("-----------Linked List-----------\n");
    printing_nodes(head);

    int mid_node, i = 1;
    if(n%2 == 0){
        mid_node = n/2;
    }
    else{
        mid_node = (n+1)/2;
    }

    printf("Middle Node no is %d\n", mid_node);

    struct node *ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Memory allocation fail....\n");
        exit(1);
    }
    ptr = head;

    while (i < mid_node)
    {
        ptr = ptr->link;
        i++;
    }


    printf("The data of middle node is %d\n", ptr->data);
    return 0;
}