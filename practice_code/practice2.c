#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
