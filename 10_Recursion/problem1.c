#include<stdio.h>

int fun(int);

int main(){
    printf("Function return is %d\n",fun(6));
    return 0;
}

int fun(int n){
    if(n==0)
        return 1;
    else
        return 7 + fun(n-2) ;
}
