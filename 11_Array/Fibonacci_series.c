#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of terms in the Fibonacci series:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit with an error code
    }

    int fibArray[n];
    fibArray[0] = 0;
    fibArray[1] = 1;

    printf("Fibonacci Series:\n");

    // Print the first two terms (0 and 1)
    printf("%d %d ", fibArray[0], fibArray[1]);

    // Generate and print the rest of the Fibonacci series
    for (int i = 2; i < n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
        printf("%d ", fibArray[i]);
    }

    return 0;
}
