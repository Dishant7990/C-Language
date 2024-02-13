#include<stdio.h>
char *strstr(char* str, char* substr){
    if(*substr == '\0')  return (char*) str;
    while(*str != '\0'){
        const char *s1 = str;
        const char *s2 = substr;

        while(*s2 != '\0' && *s1 == *s2){
            s1++;
            s2++;
        }
        if(*s2 == '\0')  return (char*) str;

        str++;
    }
    return NULL;
}
int main(void){
    char str[] = "Hello I am Dishant";
    char substr[] = "am";
    char *result = strstr(str, substr);
    printf("Result of strstr is : %ld\n", result);
    printf("str is : %ld\n", str);
    if(result != NULL){
        printf("'%s' found at index %ld in '%s'\n", substr, result - str, str);
    }
    else {
        printf("'%s' not found in '%s'\n", substr, str);
    }
    return 0;
}
