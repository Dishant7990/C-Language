#include<stdio.h>
int main(void){
    int a, i = 1;
    printf("Enter The Number of Table:");
    scanf("%d", &a);
    printf("Multiplication table for %d:\n", a);
    while (i > 0 && i <= 50 )
    {
        printf("%d x %d = %d\n", a, i, a*i);
        i++;
    }
    return 0;
}