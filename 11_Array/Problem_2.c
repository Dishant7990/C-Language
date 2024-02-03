#include<stdio.h>

int main(void){
    int i, n, sum = 0, arg = 0; 
    printf("Enter the number of terms in array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the all elements:\n");
    for ( int i = 0; i < n; i++)
    {
        printf("Enter [%d] :",i);
        scanf("%d", &a[i]);
        //
    }
    printf("You enter this number as terms in array:\n");
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        sum = sum + a[i];
    }
    printf("\nSum of all elements is: %d\n", sum);
    arg = sum / n;
    printf("Average of all elements is: %d\n", arg);

    
    return 0;
}
