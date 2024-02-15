#include<stdio.h>
#include<stdarg.h>
float sum(int num, ...){
    va_list valist;// stdarg.h inbuilt function
    float sum = 0.0;
    va_start(valist, num);

    for (int i = 0; i < num; i++)
    {
        sum = sum + va_arg(valist, int);
    }

    va_end(valist);

    return sum;
    
}
int main(void){
    printf("Sum of 1,2,3,4,5 is %.2f\n", sum(5, 1,2,3,4,5));

    printf("Sum of num is %.2f\n", sum(5, 12,24,31,43,50));
    
    return 0;
}