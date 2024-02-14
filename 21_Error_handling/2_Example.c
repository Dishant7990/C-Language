#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        // If scanf returns a value other than 1, it means input is not an integer
        fprintf(stderr, "Error: Invalid input. Please enter an integer.\n");
        exit(EXIT_FAILURE);
    }

    // Check if the entered number is within a specific range
    if (number < 0 || number > 100) {
        fprintf(stderr, "Error: Input out of range. Please enter a number between 0 and 100.\n");
        exit(EXIT_FAILURE);
    }

    printf("You entered: %d\n", number);

    return 0;
}
