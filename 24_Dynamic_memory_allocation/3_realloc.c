#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i;
    int *ptr = (int* )malloc(2*sizeof(int));

    if(ptr == NULL){
        printf("Memory not available\n");
        exit(1);
    }

    printf("Enter the two number : \n");
    for(i = 0; i<2; i++){
        scanf("%d", ptr + i);
    }

    //Memory allocation for 2 more integers
    ptr = (int* )realloc(ptr, 4*sizeof(int));
    if(ptr == NULL){
        printf("Memory not available!!\n");
        exit(1);
    } 

    //Extra two input take from user
    printf("Enter the extra two number : \n");
    for(i = 2; i<4; i++){
        scanf("%d", ptr + i);
    }
    
    //Printing the numbers
    for ( i = 0; i < 4; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}