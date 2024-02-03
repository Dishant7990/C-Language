#include<stdio.h>
void count(int n){
    int d = 1;
    printf("%d ",n);
    printf("%d ",d);
    d++;
    if(n > 1) count(n - 1);
    printf("%d ",d);
}

int main(void){
    count(3);
    return 0;
}