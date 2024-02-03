// LEFT Shift The array values by 1 step
//LEFT side ROTATING
#include<stdio.h>

int main(void){
    int n;
    printf("Enter the lenght of array:\n ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("You Entered a Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int firstE = a[0];
    for(int i = 0; i<n-1; i++){
        a[i] = a[i+1];
    }
    a[n-1] = firstE;
    printf("\nRotate Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}