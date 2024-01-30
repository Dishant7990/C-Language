#include<stdio.h>

int main(void){
    int n,q,result = 0,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    q = n;
    while (q != 0)
    {
        rem = q%10;
        //printf("reminder is %d\n", rem);
        result = result + rem;
        //printf("result is %d\n", result);

        q = q/10;
        //printf("%d\n",q);
        
    }
    printf("Sum of number is :%d", result);
    return 0;
}