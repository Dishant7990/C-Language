#include <stdio.h>

int countingChar(char str[], char c) {
    int i = 0, count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    printf("No. of words in string is %d.\n",count);
    int n = count;
    count = 0;
    for(int j = 0; j<n ; j++){
        if(str[j] == c){
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "Hello How Are you ee?";
    int result = countingChar(str, 'e');
    printf("\n%d", result);
    return 0;
}