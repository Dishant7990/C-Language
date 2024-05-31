#include<stdio.h>
/*
   -> 10 & 1 = 0 For Even number its output always 0
   -> 11 & 1 = 1 For Odd number its output is always 1
*/
void Check_Even_Odd_Number(unsigned int num){
    if( (num & 1) == 0 )
    {
        printf("%d is Even number!!!\n", num);
    }
    else
    {
        printf("%d is Odd number!!!\n", num);
    }
}


int main(void){
    unsigned int num;
    while (1)
    {
        printf("Enter the Number:\n");
        scanf("%d", &num);

        Check_Even_Odd_Number(num);
    }
    
    return 0;
}