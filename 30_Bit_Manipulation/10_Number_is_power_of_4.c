#include<stdio.h>


unsigned int method_1_isPowerOf4(unsigned int num){
    if(num == 0) return 0;

    while(num != 1){
        if(num % 4 != 0) return 0;

        num /= 4;
    }
    return 1;
}

unsigned int method_2_isPowerOf4(unsigned int n){
    return !(n & (n - 1)) && (n % 3 == 1);
}

unsigned int method_3_isPowerOf4(unsigned int n){
    unsigned int powerof2 = !(n & (n - 1));
    unsigned int mask = !(n & 0xAAAAAAAA);
    return powerof2 && mask;
}

int main(void){
    unsigned int num;
    while (1)
    {
        printf("Enter the number :\n");
        scanf("%d", &num);

        if(method_3_isPowerOf4(num)){
            printf("%d is power of 4.\n", num);
        }
        else{
            printf("%d is not Power of 4.\n", num);
        }
    }
    
    return 0;
}