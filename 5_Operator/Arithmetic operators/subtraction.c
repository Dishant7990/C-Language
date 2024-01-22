#include<stdio.h>
int sub(int x,int y){
    int z = x - y;
    return z;
}

int main(void){
    int a, b, c;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of a: \n",a);
        scanf("%d",&a);
        printf("Enter the value of b: \n",b);
        scanf("%d",&b);
        c = sub(a, b);
        printf("The ans of subtraction is : %d\n",c);
    }
    return 0;
}