// CLEARING Nth NUMBER BIT Means SET AS 0
// IF BIT IS ALREADY 0 THEN NO CHANGES
// IF BIT IS 1 THEN SET AS 0

#include<stdio.h>

/*
    Num = 15  0000 1111
    k = 2
    mask = ~(1 << (k - 1))
         = ~(1 << 1)
         = ~(0000 0010)
         = 1111 1101

           0000 1111
         & 1111 1101
     -------------------
           0000 1101  (In Decimal = 13)
    
    Before = 15
    After 2nd bit clear = 13
*/

int SetNthBit(int num, int k){
    int mask = ~(1 << (k - 1));
    return (num & mask);
}

int main(void){
    int num, n;

    while(1){
    printf("Enter The Number:\n");
    scanf("%d", &num);
    printf("Enter nth number of Bit do you want to Set:\n");
    scanf("%d", &n);

    num = SetNthBit(num , n);
    printf("New Number is %d.\n", num);
    
    }
    return 0;
}