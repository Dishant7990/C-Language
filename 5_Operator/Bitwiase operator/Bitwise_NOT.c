#include<stdio.h>
int main(void){
    unsigned int a,c;
    printf("Enter the value of a :\n",a);
    scanf("%d",&a);
   // printf("Enter the value of b :\n",b);
    //scanf("%d",&b);

    c = ~a ;
    
    printf("Bitwise NOT operation of a is : %d\n",c);
    return 0;

}