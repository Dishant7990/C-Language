#include<stdio.h>
int sum(int a, int b){
    int c = a + b;
    return c;  
}
int main(){
    int a, b, d;
    //for (int i = 0; i < 3; i++)
    //{
    printf("Enter the value of a = \n",a);
    scanf("%d", &a);
    printf("Enter the value of b = \n",b);
    scanf("%d", &b);
    d = sum(a, b);
    printf("The sum of a and b is : %d\n",d);
    //}
    
    
    return 0;
}