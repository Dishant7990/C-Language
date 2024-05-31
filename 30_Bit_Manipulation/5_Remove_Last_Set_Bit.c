//REMOVE LAST SET BIT 
// IF 8 = 1000 Then last set bit is 4th and it will remove
// if last set bit remove then we get 0111 (7 in Decimal)
// Simply we can say 8 - 1 = 7
#include<stdio.h>

unsigned int removeLastSetBit(unsigned int num){

    return (num & (num - 1));
}

int main(void){
    unsigned int num;

    while(1){
    printf("Enter The Number:\n");
    scanf("%u", &num);
    
    num = removeLastSetBit(num);
    printf("New Number is %d.\n", num);
    
    }
    return 0;
}