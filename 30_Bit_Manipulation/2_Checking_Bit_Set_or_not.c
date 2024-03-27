// CHECKING Kth BIT IS SET OR NOT

#include<stdio.h>
#include<stdint.h>
/*
    n = 27      0001 1011
    checking 4th Bit is Set or not
    k = 4
    mask = 1 << (k-1)
         = 1 << 3
         = 0000 0001 << 3
         = 0000 1000

    Check Condition With using & Bitwise Operator

    n & mask

        0001 1011
      & 0000 1000
      --------------
        0000 1000
*/
void is_Kth_bitset(uint8_t n, uint8_t k){
    int mask = 1 << (k - 1);

    if(n & mask){
        printf("Bit is Set!!"); // Kth Number bit is 1
    }
    else{
        printf("Bit is Not Set!!"); // Kth Number bit is 0
    }
}

int main(void){

    uint8_t num, k;

    while(1){
        printf("Enter the Number :\n");
        scanf("%hhu", &num);
        printf("Enter nth number bit do you want to check :\n");
        scanf("%hhu", &k);
        
        is_Kth_bitset(num , k);
    }

    return 0;
}