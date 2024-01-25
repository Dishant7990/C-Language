#include<stdio.h>
int main(void){
    int a;
    printf("Enter The Number of Table:");
    scanf("%d", &a);
    // Multiplication table using a for loop
    printf("Multiplication table for %d:\n", a);

    for (int i = 1; i <= 10 ; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
    return 0;
}