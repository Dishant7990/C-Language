#include<stdio.h>
/*var = 3;
  var >> 1;       output = 1      [3 / 2^1]
  var >> 5;       output = 0      [3 / 2^5] 
  
  var = 100;
  var >> 1;       output = 50     [100 / 2^1]*/
int main(void){
    unsigned int a,c,i;
    printf("Enter the value of a :\n",a);
    scanf("%d",&a);
    printf("Enter the Shifting value i :\n",i);
    scanf("%d",&i);

    c = a >> i;
    
    printf("Bitwise Right shifting operation of a is : %d\n",c);
    return 0;

}