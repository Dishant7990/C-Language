#include<stdio.h>
#include<string.h>
int main(void){
    char str1[100] = "He";
    char str2[200] = "llo!";
    //strcat(str1, str2);
    printf("Str1 : %s\n",str1);

    int i = sizeof(str1) - strlen(str1) - 1;
    printf("I : %d\n", i);
    return 0;
}