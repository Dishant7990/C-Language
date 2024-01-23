#include<stdio.h>
int main(void){
    int a,b,c;
    printf("Enter the value of a :\n",a);
    scanf("%d",&a);
    printf("Enter the value of b :\n",b);
    scanf("%d",&b);

    c = a & b;
    
    printf("Bitwise AND operation of a and b is : %d\n",c);
    return 0;

}