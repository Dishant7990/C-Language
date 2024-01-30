// C Program to swap to 2 num
//Using Pointer concept

#include<stdio.h>
int swap(int*, int*);
int main(void){
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);

    swap(&a,&b);
    
    printf("In caller side\n a = %d b = %d\n",a ,b);
    return 0;
}

int swap(int *a,int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("In function side\n a = %d b = %d\n",*a ,*b);

}