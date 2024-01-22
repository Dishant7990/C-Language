#include<stdio.h>
float div(int x,int y){
    float z = (float)x / y;
    return z;
}

int main(void){
    int a, b;
    float c;

    //printf("Please enter only divisiable numbers\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of a: \n",a);
        scanf("%d",&a);
        printf("Enter the value of b: \n",b);
        scanf("%d",&b);
        c = div(a, b);
        printf("Division of a and b is : %.2f\n",c);
    }
    return 0;
}