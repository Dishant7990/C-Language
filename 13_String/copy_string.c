#include<stdio.h>

int main(void){
    char s[6] = "Hello\n";
    printf("%s\n", s);
   // printf("\n");
    char t[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("value of i : %d\n", i);
        t[i] = s[i];
        //printf("Value of t[%d] = %c\n", i,t[i]);
    }
    t[i] = '\0';
    printf("%s", t);
    return 0;       
    
}