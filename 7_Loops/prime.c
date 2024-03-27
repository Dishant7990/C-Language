#include<stdio.h>
void isPrime(int num){
    int count = 0;
    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            count++;
        }
    }
    if( count == 2){
        printf("%d is prime number!!!\n", num);
    }
    else{
        printf("%d is not a prime number!!!", num);
    }
}
int main(void){
    int num;
    printf("Enter the number :\n");
    scanf("%d", &num);
    isPrime(num);
    return 0;
}