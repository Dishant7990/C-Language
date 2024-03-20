// #include<stdio.h>

// int main(void){
//     FILE* fptr;
//     fptr = fopen("text.txt", "w");
//     fputs("Hello How are you all ?", fptr);
//     fclose(fptr);
//     return 0;
// }
#include <stdio.h>

int main(void) {
    FILE* fptr;
    // Open file for writing
    fptr = fopen("text.txt", "w");
    // Check if file opening was successful
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1; // Return error code
    }
    // Write to file
    if (fputs("Hello How are you all ?", fptr) == EOF) {
        printf("Error writing to file!\n");
        fclose(fptr); // Close file before exiting
        return 1; // Return error code
    }
    // Close file
    fclose(fptr);
    printf("File written successfully.\n");
    return 0;
}
