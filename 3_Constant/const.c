#include<stdio.h>
// #define a 10
// #define b 19.67

int main(){
   const int a = 10;
   const float b = 19.56;
    int c;
    printf("The sum of a & b is : %.2f\n", ( a + b ));
    //a = 20;
    c = 50;
    printf("The sum of a & b is : %.2f\n", (a+b+c));
    int d = &a;
    int e = &b;
    int f = &c;
    printf("The address of a: %d\n",d);
    printf("The address of b: %d\n",e);
    printf("The address of c: %d\n",f);


    return 0;
}