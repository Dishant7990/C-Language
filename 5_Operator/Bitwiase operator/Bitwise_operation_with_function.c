#include <stdio.h>

// Function to perform bitwise AND operation
int bitwiseAND(int a, int b) {
    return a & b;
}

// Function to perform bitwise OR operation
int bitwiseOR(int a, int b) {
    return a | b;
}

// Function to perform bitwise XOR operation
int bitwiseXOR(int a, int b) {
    return a ^ b;
}

// Function to perform bitwise NOT operation
int bitwiseNOT(int a) {
    return ~a;
}

// Function to perform left shift operation
int leftShift(int a, int positions) {
    return a << positions;
}

// Function to perform right shift operation
int rightShift(int a, int positions) {
    return a >> positions;
}

int main() {
    int operand1;
    int operand2;
    printf("Enter the value of a :\n",operand1);
    scanf("%d",&operand1);
    printf("Enter the value of b :\n",operand2);
    scanf("%d",&operand2);

    // Bitwise AND
    int resultAND = bitwiseAND(operand1, operand2);
    printf("Result of AND: %d\n", resultAND);

    // Bitwise OR
    int resultOR = bitwiseOR(operand1, operand2);
    printf("Result of OR: %d\n", resultOR);

    // Bitwise XOR
    int resultXOR = bitwiseXOR(operand1, operand2);
    printf("Result of XOR: %d\n", resultXOR);

    // Bitwise NOT
    int resultNOT = bitwiseNOT(operand1);
    printf("Result of NOT on operand1: %d\n", resultNOT);

    // Left Shift
    int resultLeftShift = leftShift(operand1, 2);
    printf("Result of left shift: %d\n", resultLeftShift);

    // Right Shift
    int resultRightShift = rightShift(operand1, 1);
    printf("Result of right shift: %d\n", resultRightShift);

    return 0;
}
