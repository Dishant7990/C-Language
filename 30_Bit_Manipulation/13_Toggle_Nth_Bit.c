#include<stdio.h>

unsigned int toggleNthBit(unsigned int n, unsigned int k){
    return (n ^ (1 << (k-1)));
}
int main(void){
    unsigned int num, k;
    while (1)
    {
        printf("Enter the number:\n");
        scanf("%u", &num);
        printf("Enter nth bit of the number do you want change:\n");
        scanf("%u", &k);
        num = toggleNthBit(num, k);

        printf("NEW NUMBER : %u\n", num);
    }
    
    return 0;
}