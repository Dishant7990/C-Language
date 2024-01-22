#include<stdio.h>
#include<stdlib.h>
 extern int count;
 int increment(void);
//extern int increment();// it is takes input from add.c file
int main(){
    int value=0;

    value = increment();
    printf("%d\n", value);

    value = increment();
    printf("%d\n", value);

    value = increment();

    // count = count + 3;
    // value = count;

    printf("%d\n", value);
    return 0;
}