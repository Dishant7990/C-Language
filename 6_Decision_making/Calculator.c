#include<stdio.h>
int main(void){
    float a,b,c;
    char operator;
    printf("Enter Number 1 :\n");
    scanf("%f",&a);
    printf("Enter the operator(+, -, * , /) : ");
    scanf(" %c", &operator);
    printf("Enter Number 2 :\n");
    scanf("%f",&b);
    switch (operator){
    case '+':
            c = a + b;
            break;
    case '-':
            c = a - b;
            break;
    case '*':
            c = a * b;
            break;
    case '/':
            if (b != 0) {
                c = a / b;
            } 
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            break;
    default:
            printf("You Enter invalid operator\n");
            return 1;
    }
    printf("The answere is : %.2f\n",c);
    return 0;
}


    
    