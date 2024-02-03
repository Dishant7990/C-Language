//Find Minimum number in Array

#include<stdio.h>

int main(void){
    int n,temp;

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
    
    for(int i = 0; i<n ; i++){
        for(int j = (i+1); j<n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSmallest number in Array:\n");
    printf("%d ", a[0]);
    return 0;
}