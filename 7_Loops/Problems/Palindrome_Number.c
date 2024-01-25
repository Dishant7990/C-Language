#include<stdio.h>

int main(void){
    int n, result = 0, rem,q;
    printf("Enter the Number:\n");
    scanf("%d", &n);
    q = n;
    while (q!=0)
    {
       rem = q%10;
       result = result*10 + rem;
       q = q/10;
    }
    
    if(result == n){
    printf("Yess!! The number is palindrome.\n");
    }
    else{
        printf("Noo...The number is not palindrome.");
    }
    
    return 0;
}