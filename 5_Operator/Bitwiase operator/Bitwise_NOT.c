#include<stdio.h>
#include<string.h>

int main(void) {
    char binaryInput[9];  // 8 bits + null terminator

    // Input an 8-bit binary number
    printf("Enter an 8-bit binary number:\n");
    scanf("%8s", binaryInput);

    // Convert binary string to unsigned char
    unsigned char a = (unsigned char)strtol(binaryInput, NULL, 2);

    // Perform bitwise NOT operation
    unsigned char c = ~a;

    // Print the result in binary format
    printf("Binary representation of %u after bitwise NOT: ", a);
    for (int i = sizeof(c) * 8 - 1; i >= 0; i--) {
        printf("%d", (c >> i) & 1);
    }
    printf("\n");

    return 0;
}
