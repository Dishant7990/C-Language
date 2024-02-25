#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(){
    int x;
    printf("Enter Data::\n");
    scanf("%d", &x);

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    
    newnode->data = x;
    newnode->link = 0;

    if(front == 0 && rear == 0){
        front = rear = newnode;
    }
    else{
        rear->link = newnode;
        rear = newnode;
    }
}

void display(){
    struct node *temp;
    if(front == 0 && rear == 0){
        printf("Queue is Empty...!!\n");
    }
    else{
        int i = 1;
        temp = front;
        while (temp != 0)
        {
            printf("Queue Element %d is %d\n", i++, temp->data );
            temp = temp->link;
        }
        
    }
}

void dequeue(){
    struct node *temp;
    temp = front;
    if(front == 0 && rear == 0){
        printf("Queue Underflow...!!\n");
    }
    else{
        printf("Dequeue element is %d\n", front->data);
        front = front->link;
        free(temp);
    }
}

void peek(){
    if(front == 0 && rear == 0){
        printf("Queue Underflow...!!\n");
    }
    printf("Front Queue is %d\n", front->data);
}

int main(void){
    int choice;
    do{
        printf("\n==================================\n");
        printf("---------Queue Operation----------\n");
        printf("1 = Enqueue\n2 = Dequeue\n3 = Peek\n4 = Display\n5 = Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        printf("\n==================================\n");

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...!!\n");
                break;
            default:
                printf("Invalid Input!\n");
        }
    }while(choice != 5);
    return 0;
}