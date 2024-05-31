#include<stdio.h>

void ispowerOf2(unsigned int n){

    unsigned int mask = (n & (n - 1)); // N & (N-1) = 0... Ans is always 0 for power of 2
    // mask = !(n & (n-1));     its return 1 for power of 2


    if(mask == 0){
        printf("%d is power of 2.\n", n);
    }
    else{
        printf("%d is not power of 2.\n", n);
    }

}

int main(void){

    unsigned int num;

    while(1){ 
        printf("Enter the number :\n");
        scanf("%u", &num);

        ispowerOf2(num);
    }

    return 0;
}