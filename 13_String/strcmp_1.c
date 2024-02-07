#include<stdio.h>
#include<string.h>
#define N 100
int compareString(const char* a, const char *b){
    int r;
    for(int i = 0; a[i] != '\0' && b[i] != '\0'; i++){
        if(a[i] != b[i]){
            r = a[i] - b[i];
            return r; 
        }
    }
    return strlen(a) - strlen(b);
}
int main(void){
    char s1[N], s2[N];
    printf("Enter the s1 String value:\n");
    scanf("%s", s1);
    printf("Enter the s2 String value:\n");
    scanf("%s", s2);

    printf("s1 = %s  s2 = %s\n", s1, s2);
    int Result = compareString(s1, s2);
    printf("Result : %d\n", Result);

    if(Result == 0){
        printf("String is equal\n");
    }
    else{
        printf("String is not equal\n");
    }
    return 0;
}