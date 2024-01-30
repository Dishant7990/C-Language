// C Program to swap to 2 num

#include<stdio.h>
int swap(int n, int m);
int main(void){
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    swap(a,b);
    printf("In caller side\n a = %d b = %d\n",a ,b);
    return 0;
}

int swap(int n,int m){
    int t;
    t = n;
    n = m;
    m = t;
    printf("In function side\n a = %d b = %d\n",n ,m);

}