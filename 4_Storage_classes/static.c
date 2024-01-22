#include <stdio.h>
void increment();
int main() {
    increment();
    increment();
    increment();
    increment();
    increment();
    return 0;
}

void increment(){
    static int a=0;
    a++;
    printf("a=%d\n",a);
}
/*
The static storage class instructs the compiler to
 keep a local variable in existence during 
the life-time of the program instead of creating 
and destroying it each time it comes into and goes out of scope.

static allows them to maintain their values between function calls.
 also be applied to global variables. 
 
*/