#include <stdio.h>

int main() {
    int n,rem,i,q,count = 0;
    printf("Enter the number:");
    scanf("%d",n);
    q = n;
    while(q != 0){
        //rem = q%10;
        count++;
        q /= 10;

    }
    q = n;
    
    // Print the count of digits
    printf("Number of digits: %d\n", count);
    
    // Print the reversed number
    printf("Reversed number: ");
    //printf("%d", count);
    for(i=1; i<=count; i++){
        rem = q % 10;
        printf("%d",rem);
        q /= 10;
    }

    return 0;
}
