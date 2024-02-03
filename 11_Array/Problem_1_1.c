//RIGHT SIDE SHIFT THE ELEMENTS OF ARRAY
//RIGHT SIDE ROTATING

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
    
    int lastE = a[n-1];// Last variable store in diff variable
    
    for(int i = (n-1); i>=0; i--){
        a[i] = a[i-1];
    }

    a[0] = lastE; //Last variable assign to first element
    
    printf("\nRotate Array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d \r\n",i, a[i]);
    }
    return 0;
}