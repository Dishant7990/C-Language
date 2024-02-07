#include <stdio.h>
#define N 20
void combineStrings(char *str1, char *str2, char *combined) {
    int i,j;
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }
    combined[i + j] = '\0';
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
    char combined[200]; 
    
    combineStrings(str1, str2, combined);
    
    printf("Combined string: %s\n", combined);

    return 0;
}