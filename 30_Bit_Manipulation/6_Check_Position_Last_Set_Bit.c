#include <stdio.h>

int findRightmostSetBit(unsigned int num) {
    int position = 1;
    
    // If num is 0, return 0 indicating no set bits
    if (num == 0) return 0;
    
    // Loop until the least significant bit (LSB) is 1
    while ((num & 1) == 0) {
        num >>= 1;  // Right shift to check the next bit
        position++; // Increment the position
    }
    
    return position;
}

int main(void) {
    unsigned int num;

    while(1) {
        printf("Enter The Number:\n");
        scanf("%u", &num);
        
        int position = findRightmostSetBit(num);
        printf("Position of the rightmost set bit is %d.\n", position);
    }
    
    return 0;
}
/*

#include <stdio.h>

unsigned int removeLastSetBit(unsigned int num) {
    return num & ~(num - 1);
}

int log2_int(unsigned int num) {
    int count = 0;
    while (num >>= 1)
        count++;
    return count;
}

int main(void) {
    unsigned int num;

    while (1) {
        printf("Enter The Number:\n");
        scanf("%u", &num);

        unsigned int rightmost_set_bit = removeLastSetBit(num);
        printf("Number with only the rightmost set bit: %u\n", rightmost_set_bit);
        
        int position = log2_int(rightmost_set_bit) + 1;
        printf("Position of the rightmost set bit: %d\n", position);
    }
    return 0;
}
*/