#include<stdio.h>
union abc
{
    int a;
    float b;
    char c;
    double d;
};


int main(void){
    printf("Size of union is %d Bytes\n", sizeof(union abc));
    return 0;
}
/*
OUTPUT -->
Size of union is 8
*/