#include<stdio.h>

typedef union {
    int a;
    char b;
    double c;
}data;

typedef struct {
    int a;
    char b;
    double c;
}Data_t;

int main(void){
    data arr[10];
    Data_t arr1[10];
    arr[0].a = 10;
    arr[1].b = 'a';
    arr[2].c = 112.23;
    printf("Size of Union Array is %d Bytes\n", sizeof(arr));
    printf("Size of Structure Array is %d Bytes\n", sizeof(arr1));
    return 0;
}