#include<stdio.h>


unsigned int method_1_isPowerOf8(unsigned int num){
    if(num == 0) return 0;

    while(num != 1){
        if(num % 8 != 0) return 0;

        num /= 8;
    }
    return 1;
}

unsigned int method_2_isPowerOf8(unsigned int n){
    return !(n & (n - 1)) && (n % 7 == 1);
}

unsigned int method_3_isPowerOf8(unsigned int n){
    unsigned int powerof2 = !(n & (n - 1));
    unsigned int mask = !(n & 0xB6DB6DB6);
    return powerof2 && mask;
}

int main(void){
    unsigned int num;
    while (1)
    {
        printf("Enter the number :\n");
        scanf("%d", &num);

        if(method_1_isPowerOf8(num)){
            printf("%d is power of 8.\n", num);
        }
        else{
            printf("%d is not Power of 8.\n", num);
        }


        if(method_2_isPowerOf8(num)){
            printf("%d is power of 8.\n", num);
        }
        else{
            printf("%d is not Power of 8.\n", num);
        }


        if(method_3_isPowerOf8(num)){
            printf("%d is power of 8.\n", num);
        }
        else{
            printf("%d is not Power of 8.\n", num);
        }
    }
    
    return 0;
}