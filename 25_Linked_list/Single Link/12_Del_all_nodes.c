#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void insert_node(struct node *head, int data){
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


struct node* del_all_node(struct node *head){
    struct node* temp = head;
    
    while (temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 20;
    head->link = NULL;

    if(head == NULL)
    {
        printf("linked list is empty\n");
        exit(1);
    }

    // INSERTING NEW NODES AT THE END OF THE LISTS

    insert_node(head,30);
    insert_node(head,40);
    insert_node(head,50);

    printf("--------Before Deleting nodes--------\n");
    printing_nodes(head);
    
    head = del_all_node(head);
    if(head == NULL){
        printf("\nLinked List Succesfully Deleted...");
    }
    return 0;
}