#include<stdio.h>

int main(void){
    int n,q,fact = 1,result = 0;
    //Input
    printf("Enter the number\n");
    scanf("%d", &n);
    //STEP 1 : Calculate the factorial of each digit of number and add them 
    q = n;
    while(q != 0){
        int rem = q%10;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q =  q/10;
    }
    // STEP 2: Check the number is strong or not.
    if(result == n){
        printf("Yess the number is strong number...");
    }
    else{
        printf("Noo The number is not strong number...");
    }
    return 0;
}