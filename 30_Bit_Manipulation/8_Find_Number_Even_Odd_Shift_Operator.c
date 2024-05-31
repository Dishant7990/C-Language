#include<stdio.h>
/*
   -> For Even Number Last bit is always 0
   -> For Odd Number Last bit is always 1
   -> If we right shift 1 bit of number Then Left Shift 1 bit of number
      For Even number there is no changes
      But for Odd number decrease by 1 and become Even number but its not our 
      correct (input) number
*/
void Check_Even_Odd_Number(unsigned int num){
    unsigned int k = num>>1;// Shifting bit by 1 to Right side
    k <<= 1;                // Shifting bit by 1 to Left side
    if( k == num )
    {
        printf("%d is Even number!!!\n", num);
    }
    else
    {
        printf("%d is Odd number!!!\n", num);
    }
}


int main(void){
    unsigned int num;
    while (1)
    {
        printf("Enter the Number:\n");
        scanf("%d", &num);

        Check_Even_Odd_Number(num);
    }
    
    return 0;
}