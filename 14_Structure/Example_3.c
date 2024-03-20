#include<stdio.h>

typedef struct Calculator{
    int (*ptr[4])(int, int);
}cal_t;


int sum(int a, int b){
    printf("You Enter %d and %d and Sum is %d.\n", a,b,a+b);
    return 0;
}

int sub(int a, int b){
    printf("You Enter %d and %d and Sub is %d.\n", a,b,a-b);
    return 0;
}

int mul(int a, int b){
    printf("You Enter %d and %d and Muiltiplication is %d.\n", a,b,a*b);
    return 0;
}

int div(int a, int b){
    printf("You Enter %d and %d and Div is %d.\n", a,b,a/b);
    printf("You Enter %d and %d and Module is %d.\n", a,b,a%b);
    return 0;
}


int main(void){
    cal_t num = { sum, sub, mul, div};

    int x,y,op;

    printf("Enter X value:\n", x);
    scanf("%d", &x);
    printf("Enter Y value:\n", y);
    scanf("%d", &y);
    
    printf("Enter the Operator (0 for sum, 1 for sub, 2 for mul, 3 for div): ");
    scanf("%d", &op);

   if(op<0 || op>3){
    printf("Invalid operator\n");
    return 1;
   }


    num.ptr[op](x, y);

    return 0;
}