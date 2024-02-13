#include<stdio.h>
union abc
{
    int a;
    char b;
}var;

int main(void){
    var.a = 65;
    printf("a == %d\n", var.a);
    printf("B == %c\n", var.b);
    printf("A address = %d\n", &var.a);
    printf("B address = %d\n", &var.b);


    return 0;
}

/*
OUTPUT-->
a == 65
B == A
A address = 4223088
B address = 4223088
*/