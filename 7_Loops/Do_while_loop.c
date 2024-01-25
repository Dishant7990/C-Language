#include<stdio.h>
int main(void){
    int a, i = 0, c = 0;
    printf("Enter the Number:");
    scanf("%d", &a);
    do
    {
        printf("%d ",a);
        c += a; 
        a++;
        i++;
    } while (i < 10);
    printf("\nSum of Next 10 number is : %d", c);
    return 0;
}