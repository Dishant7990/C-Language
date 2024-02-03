#include<stdio.h>

int main(void){
    int a[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("Enter the Number: \n");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        // printf("%d ",a[i]);
        //scanf("%d", &a[i]);
                printf("arr[%d] = %d\r\n",i,a[i]);
    }
    printf("\n");
    int j = 0;
    for (int i = 9; i >= 0; i--)
    {
        printf("arr[%d] = %d\r\n",j++,a[i]);
        //scanf("%d", &a[i]);
    }
    printf("\n%d", sizeof(a));
    return 0;
}