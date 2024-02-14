#include <stdio.h>
#include <errno.h>
#include <string.h>

// Function to perform division
double divide(int numerator, int denominator) {
    // Check if the denominator is zero
    if (denominator == 0) {
        // Set errno to indicate division by zero
        errno = EDOM;
        return 0.0; // Return a default value indicating failure
    }
    // Perform the division and return the result
    return (double)numerator / denominator;
}

int main() {
    int numerator, denominator;
    double result;

    printf("Enter numerator: ");
    scanf("%d", &numerator);
    printf("Enter denominator: ");
    scanf("%d", &denominator);

    // Perform division
    result = divide(numerator, denominator);

    // Check for error
    if (errno == EDOM) {
        perror("Error"); // Print error message
        printf("Division by zero error: %s\n", strerror(errno)); // Print error description
    } else {
        printf("Result of division: %.2f\n", result);
    }

    return 0;
}
