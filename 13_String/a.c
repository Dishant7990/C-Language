#include <stdio.h>
#include <string.h> // Include string.h for strlen()

#define N 20

void combineStrings(char *str1, char *str2, char *combined) {
    int i = 0;
    
    // Copy str1 to combined
    while (*str1 != '\0') {
        combined[i] = *str1;
        str1++;
        i++;
    }

    // Copy str2 to combined
    while (*str2 != '\0') {
        combined[i] = *str2;
        str2++;
        i++;
    }

    combined[i] = '\0'; // Don't forget to null-terminate the combined string
}

int main() {
    char str1[N];
    char str2[N];

    printf("Enter a string for str1:");
    scanf("%99[^\n]",str1);
    getchar();
    printf("Enter another string for str2:");
    scanf("%99[^\n]",str2);
    getchar();
    printf("Str2: %s\n", str2);
    
    char combined[N * 2 + 1]; // Allocate enough space for both strings plus the null terminator
    
    combineStrings(str1, str2, combined);
    
    printf("Combined string: %s\n", combined);

    return 0;
}
