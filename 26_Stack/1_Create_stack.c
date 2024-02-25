#include<stdio.h>
#define Max 5

int stack[Max];
int top = -1;

void push(){
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if(top == Max - 1){
        printf("Stack Overflow\n");
        return;
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    int item;
    if(top == -1){
        printf("Underflow...!\n");
    }
    else{
        item  = stack[top];
        top--;
        printf("Popped item: %d\n", item);
    }
}

void peek(){
    if(top == -1){
        printf("Underflow...!\n");
    }
    else{
        printf("Top item: %d\n", stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main(void){
    int choice;
    do {
        printf("\nStack Operations\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}
