#include<stdio.h>

int main(void){
    int i = 1024;
    for(;i; i>>=1)
        printf(" %d . Hello Dishant!!\n", i);
    return 0;
}   