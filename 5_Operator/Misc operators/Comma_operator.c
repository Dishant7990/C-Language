#include<stdio.h>
int main(void){
    int var,num;
    num = (var = 35, var+15);
    printf("Num is %d",num);
    return 0;
}