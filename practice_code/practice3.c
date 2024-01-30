#include <stdio.h>

int main() {
    int n, rem, q,count = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    q = n;
    while(q != 0){
        rem = q%10;
        count++;
        q /= 10;
    }
    q = n;
    printf("Number of digits: %d\n", count);
    printf("Reversed number: ");
    for(int i=1; i<=count; i++){
        rem = q % 10;
        printf("%d",rem);
        q /= 10;
    }
    return 0;
}
