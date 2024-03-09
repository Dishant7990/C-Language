#include <stdio.h>

int decimalToBinary(int num) {
     int bin = 0,rem = 0,place = 1;
   // n = num;
    while(num){
        rem = num % 2;
        num /= 2;
        bin = bin + (rem * place);
        place *= 10;
    }
    printf("%d", bin);
    return bin;
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary representation: ");
    decimalToBinary(decimal);
    return 0;
}