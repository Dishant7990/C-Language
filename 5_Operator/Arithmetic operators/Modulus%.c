#include<stdio.h>
int div(int x,int y){
    int z = x / y;
    return z;
}

int main(void){
    int a, b, d;
    int c;

    //printf("Please enter only divisiable numbers\n");
    
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the value of a: \n",a);
        scanf("%d",&a);
        printf("Enter the value of b: \n",b);
        scanf("%d",&b);
        c = div(a, b);
        d = a % b;
        printf("Division of a and b is : %d\n",c);
        printf("Reminder of a and b is : %d\n",d);
    }
    return 0;
}



