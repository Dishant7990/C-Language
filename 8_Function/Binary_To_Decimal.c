#include<stdio.h>

int convertBToD(int n){
    int a = 1;
    int ans = 0;
    while(n != 0){
        ans = ans + (n%10)*a;
        n = n/10;
        a = a * 2;
    }
    return ans;
}

int main(void){
    int n;
    printf("Enter Binary number: \n");
    scanf("%d", &n);
    int decimal = convertBToD(n);
    printf("\n%d", decimal);
    return 0;
}