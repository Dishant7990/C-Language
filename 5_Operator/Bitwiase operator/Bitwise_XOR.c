#include<stdio.h>
int main(void){
    int a,b,c;
    printf("Enter the value of a :\n",a);
    scanf("%d",&a);
    printf("Enter the value of b :\n",b);
    scanf("%d",&b);

    c = a ^ b;
    
    printf("Bitwise XOR operation of a and b is : %d\n",c);
    return 0;

}
/*int main(void){
    int a = 5,b = 8;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR, a = %d and b = %d",a,b);
    return 0;
}*/