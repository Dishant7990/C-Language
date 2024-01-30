#include<stdio.h>

int add(int, int, int,int*);  //function prototype or declaration

int main(void){
    int n,m,o,sum,d=0;
    printf("Enter 1st num:\n");
    scanf("%d", &n);
    printf("Enter 2nd num:\n");
    scanf("%d", &m);
    printf("Enter 3rd num:\n");
    scanf("%d", &o);

    sum = add(n,m,o,&d);    // Function Call
    printf("Sum is %d\n", sum);
    printf("Sum is %d", d);

    return 0;
}
// Function defination
int add(int a, int b, int c,int *d){
    *d = a + b + c;
    return *d; // return (a+b+c);
};