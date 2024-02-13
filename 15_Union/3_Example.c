#include<stdio.h>
union abc
{
    int a;
    char b;
}var;

int main(void){
    var.a = 90;
    union abc *p = &var;
    printf("%d %c\n", p->a, p->b);
    return 0;
}
/*
OUTPUT --> 90 Z
*/