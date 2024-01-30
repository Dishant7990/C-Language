#include<stdio.h>
int fun(int);
int main(){
    int num = 3 ;
       printf("fun return is %d\n",fun(num));
    return 0;
}

int fun(int n){
    if(n==1)
        return 1;
    else
        return 1+fun(n-1);
}
