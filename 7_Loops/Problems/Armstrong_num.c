#include<stdio.h>

int main(void){
    int n, count = 0, result = 0, mul = 1, cnt, rem;
    printf("Enter the number\n");
    scanf("%d", &n);
    int q = n;

    while(q != 0){
        q = q/10;
        count++;
    }
    cnt = count;
    q = n;

    while(q != 0){
        rem = q%10;
        while(cnt != 0){
        mul = mul * rem;
        cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }

    if(result == n){
        printf("Yess The number is Armstrong number...");
    }
    else{
        printf("Noo The Number is not Armstrong number...");
    }
    return 0;
}