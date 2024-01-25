//Write a program to print all odd number from 1 to 20

#include<stdio.h>

int main(void){
    int i, n=2;
    for ( i = 0; i <= 200 ; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d ",i);
    }
    
    return 0;
}