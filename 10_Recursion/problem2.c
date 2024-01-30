#include <stdio.h>
void fun(int);
int main() {
    char i=6;
    fun(i);
    return 0;
}

void fun(int n){
if(n<1) return;
fun(n-1);
fun(n-3);
printf("the value of n is %d\n",n);
}