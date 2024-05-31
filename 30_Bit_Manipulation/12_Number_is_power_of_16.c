#include<stdio.h>


unsigned int method_1_isPowerOf16(unsigned int num){
    if(num == 0) return 0;

    while(num != 1){
        if(num % 16 != 0) return 0;

        num /= 16;
    }
    return 1;
}

unsigned int method_2_isPowerOf16(unsigned int n){
    return !(n & (n - 1)) && (n % 15 == 1);
}

unsigned int method_3_isPowerOf16(unsigned int n){
    unsigned int powerof2 = !(n & (n - 1));
    unsigned int mask = !(n & 0xEEEEEEEE);
    return powerof2 && mask;
}

int main(void){
    unsigned int num;
    while (1)
    {
        printf("Enter the number :\n");
        scanf("%d", &num);

        if(method_1_isPowerOf16(num)){
            printf("%d is power of 16.\n", num);
        }
        else{
            printf("%d is not Power of 16.\n", num);
        }


        if(method_2_isPowerOf16(num)){
            printf("%d is power of 16.\n", num);
        }
        else{
            printf("%d is not Power of 16.\n", num);
        }


        if(method_3_isPowerOf16(num)){
            printf("%d is power of 16.\n", num);
        }
        else{
            printf("%d is not Power of 16.\n", num);
        }
    }
    
    return 0;
}