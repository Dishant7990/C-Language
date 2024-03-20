#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma pack(1)

typedef struct Student {
    char name[50];
    char enrollno[13];
    char gender[10];
    char sem[2];
    char num[11];
    char email[50];
    char address[200];
} student_t;

typedef struct node {
    student_t data;
    struct node *link;
} node_t;

void dataCollection(student_t *x) {
    printf("Enter Enrollment no: \n");
    scanf("%s", x->enrollno);
    getchar(); // Consume the newline character left in the buffer
    printf("Enter Student Name: \n");
    fgets(x->name, sizeof(x->name), stdin);
    x->name[strcspn(x->name, "\n")] = '\0'; // Remove the newline character from the name
    printf("Enter Gender: \n");
    scanf("%s", x->gender);
    printf("Enter Semester: \n");
    scanf("%s", x->sem);
    printf("Enter Number: \n");
    scanf("%s", x->num);
    printf("Enter Email: \n");
    scanf("%s", x->email);
    getchar(); // Consume the newline character left in the buffer
    printf("Enter Address: \n");
    fgets(x->address, sizeof(x->address), stdin);
    x->address[strcspn(x->address, "\n")] = '\0'; // Remove the newline character from the address
}

void Display(student_t x) {
    printf("=============================================\n");    
    printf("Enrollment No.     = %s\n", x.enrollno);
    printf("Name               = %s\n", x.name);
    printf("Gender             = %s\n", x.gender);
    printf("Semester           = %s\n", x.sem);
    printf("Contact Number     = %s\n", x.num);
    printf("Email              = %s\n", x.email);
    printf("Address            = %s\n", x.address);
    printf("=============================================\n");
}

node_t* insertData(node_t *head) {
    student_t x1;
    dataCollection(&x1);
    node_t *x2;
    x2 = (node_t*)malloc(sizeof(node_t));

    x2->data = x1;
    x2->link = NULL;

    // If the list is empty, set the new node as the head
    if (head == NULL) {
        head = x2;
    } else {
        // Traverse the list to find the last node
        node_t *current = head;
        while (current->link != NULL)
        {
            current = current->link;
        }
        // Link the new node to the last node
        current->link = x2;
    }
    return head;
}

void del_at_position(node_t **head) {
    int position;
    printf("Enter the position of student detail:\n");
    scanf("%d", &position);

    node_t *previous = *head;
    node_t *current = *head;

    if(*head == NULL) 
    {
        printf("List is Empty....No Data!!!\n");
    } 
    else if(position == 1) 
    {
        *head = current->link;
        free(current);
        current = NULL;
    } 
    else 
    {
        while (position != 1) 
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}

void display_node(node_t *head) {
    node_t *temp;
    int i = 1;
    temp = head;
    while (temp != NULL) 
    {
        printf("Student %d's data \n", i++);
        Display(temp->data);
        temp = temp->link;    
    }
}

int main(void) {
    node_t* head = NULL;
    int choice;
    do {
        printf("\n==================================\n");
        printf("---------Student Data----------\n");
        printf("1 = Insert Data\n2 = Delete Data\n3 = Display\n4 = Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        printf("\n==================================\n");

        switch (choice) 
        {
            case 1:
                head = insertData(head);
                break;
            case 2:
                del_at_position(&head);
                break;
            case 3:
                display_node(head);
                break;
            case 4:
                printf("Exiting...!!\n");
                break;
            default:
                printf("Invalid Input!\n");
        }
    } while(choice != 4);
    return 0;
}
