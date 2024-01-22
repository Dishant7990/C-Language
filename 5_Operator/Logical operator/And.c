#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter the valur of a :\n",a);
    scanf("%d",&a);
    printf("Enter the valur of b :\n",b);
    scanf("%d",&b);
    if (a > 0 && b > 0){
        printf("a and b both are 'positive' value");
    }
    else{
        printf("Atleast one of them is 'negative' or both are 'negative' value");
    }
    return 0;

}