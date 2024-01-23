#include<stdio.h>
int main(void){
int num;
printf("Enter the number\n",num);
scanf("%d",&num);
int* ptr = &num;
printf("Value at address %p: %d\n", ptr, *ptr);
return 0;
}