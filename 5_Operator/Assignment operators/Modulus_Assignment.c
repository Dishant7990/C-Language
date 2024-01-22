#include <stdio.h>

int main() {
    int a = 17;
    int b = 5;

    a %= b; // Equivalent to: a = a % b;
    printf("Value of a: %d\n", a); // Output: 2

    return 0;
}
