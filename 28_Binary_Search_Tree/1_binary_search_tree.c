#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *creat(){
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node)); 
    printf("Enter data (-1 for no node):\n");
    scanf("%d", &x);
    if(x == -1){
        return 0;
    }
    newnode->data = x;
    printf("Enter Left Child of %d\n", x);
    newnode->left = creat();
    printf("Enter right child of %d\n", x);
    newnode->right = creat();

    return newnode;
}

int main(void){
    struct node *root = 0;
    root = creat();
    return 0;
}