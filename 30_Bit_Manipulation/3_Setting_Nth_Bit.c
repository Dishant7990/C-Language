// SETTING Nth NUMBER BIT AS 1
// IF ALREADY SET 1 THEN AS IT IS, NOTHING CHANGES
// IF Nth BIT IS 0 THEN SET AS 1

#include<stdio.h>

/*
    Num = 12  0000 1100
    n = 5
    mask = 1 << 4
         = 0001 0000

           0000 1100
     (OR)| 0001 0000
     -------------------
           0001 1100  (In Decimal = 28)

    Before = 12
    After 5th bit Set = 28
*/

int SetNthBit(int num, int k){
    int mask = 1 << (k - 1);
    return (num | mask);
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