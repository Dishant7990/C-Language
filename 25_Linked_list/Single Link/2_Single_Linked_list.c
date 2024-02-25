#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

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

    printf("Size of structure : %d Bytes\n", sizeof(struct node));
    printf("%d\n", head);
    printf("%d\n", head->data);
    printf("%d\n", head->link);
    printf("%d\n", head->link->data);    
    printf("%d\n", head->link->link);    
    printf("%d\n", head->link->link->data);    

    return 0;
}