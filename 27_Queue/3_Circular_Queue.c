#include<stdio.h>
#define N 5

int i = 0;
int queue[N];
int front = -1;
int rear = -1;

void enqueue(){
    int x;
    printf("Enter Data: \n");
    scanf("%d", &x);
    if(rear == N-1){
        printf("Queue is Overflow...!!\n");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear+1) % N) == front){
        printf("Queue is Full...!!!\n");
    }
    else{
        rear = (rear+1) % N;
        queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is Underflow...!!\n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("Dequeue data is %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display(){
    int j = 1;
    if(front == -1 && rear == -1){
        printf("Queue is Empty..!!!\n");
    }
    else{
        int index = front;
        do {
            printf("Queue element %d is %d\n", j++, queue[index]);
            index = (index + 1) % N;
        } while (index != (rear + 1) % N);
    }
}


void peek(){
    if(front == -1 && rear == -1){
        printf("Queue is Empty..!!!\n");
    }
    else{
        printf("Queue Front is %d\n", queue[front]);
    }
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