#include<stdio.h>
/*var = 3;
  var << 1;       output = 6    [3 * 2^1]
  var << 5;       output = 96    [3 * 2^5] */
int main(void){
    unsigned int a,c,i;
    printf("Enter the value of a :\n",a);
    scanf("%d",&a);
    printf("Enter the Shifting value i :\n",i);
    scanf("%d",&i);

    c = a << i;
    
    printf("Bitwise Left Shifting operation of a is : %d\n",c);
    return 0;

}