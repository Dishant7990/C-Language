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

struct node* delFirst(struct node *head){
    struct node* temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    head->prev = NULL;
    return head;
}

struct node* delLast(struct node*head){
    struct node* temp = head;
    struct node* temp2;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    return head; 
}

struct node* delAtPos(struct node* head){
    struct node* temp = head;
    struct node* temp2 = NULL;
    int position;
    printf("Enter a node number which you want to delete:\n");
    scanf("%d", &position);

    if(position == 1){
        head = delFirst(head);
        return head;
    }

    while (position > 1)
    {
        temp = temp->next;
        position--;
    }

    if(temp->next == NULL){
        head = delLast(head);
    }
    else{
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }
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

    printf("-----------Before Deleting Node------------\n");
    print(head);

    head = delFirst(head);
    printf("----------- After Deleting Node------------\n");
    print(head);

    head = delLast(head);
    printf("----------- After Deleting Last Node------------\n");
    print(head);

    head = delAtPos(head);
    printf("----------- After Deleting At position Node------------\n");
    print(head);
    
    return 0;
}