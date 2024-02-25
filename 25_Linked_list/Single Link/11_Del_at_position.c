#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// FUNCTION TO ADD NEW NODES

void insert_node(struct node *head, int data)
{
    if(head == NULL)
    {
        printf("linked list is empty");
    }

    struct node *ptr, *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// FUNCTION TO DELETE THE NODE AT CERTAIN POSITION

void del_at_position(struct node **head, int position)
{
    struct node *previous = *head;
    struct node *current = *head;
    if(*head == NULL)
    {
        printf("List is already empty");
    }
    else if(position == 1)      // IF WE WANT TO DELETE THE 1ST NODE THAN THIS PART WILL GET EXECUTE
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while(position != 1)
            {
                previous = current;
                current = current->link;
                position --;
            }        
            previous->link = current->link;
            free(current);
            current = NULL;
    }
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
    insert_node(head,55);

    struct node *ptr;
    ptr = head;

    printf(".......value at each node.......\n");
    
    int i=1;
    while(ptr != NULL)
    {
        printf("At node %d value is %d\n",i, ptr->data);
        ptr = ptr->link;
        i++;
    }

    int position;
    printf("Enter a position of node you want to delete\n");
    scanf("%d", &position);
    
    if(position > 0 && position < 6)
    del_at_position(&head,position);    //CALLING A FUNCTION
    else{
        printf("Invalid Input. You have to enter 1 to 5 node num.\n");
    }
    ptr = head;

    printf(".......After deleting a node at certain position.......\n");
    printf("You Delete %d position of node in list\n", position);
    int j=1;
    while(ptr != NULL)
    {
        printf("At node %d value is %d\n",j, ptr->data);
        ptr = ptr->link;
        j++;
    }

    return 0;
}