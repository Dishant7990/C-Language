#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,n;
    printf("Enter the number of integers: \n");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));// Dynamic memory allocation

    if(ptr == NULL){
        printf("Memory not availabe.");
        exit(1);
    }    

    for ( i = 0; i < n; i++)
    {
        printf("Enter an interger:\n");
        scanf("%d", ptr + i);
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}