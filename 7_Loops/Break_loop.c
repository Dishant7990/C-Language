// Write a program to allow user to entry integers untill enter a negative number or a zero

#include<stdio.h>
int main(void){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        if(n < 0)
            break;
    printf("Enter a number\n");
    scanf("%d", &n);
        
    }
    return 0;
}