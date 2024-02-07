// Neso video no. 146 C programming
#include<stdio.h>
#include<string.h>
int main(void){
    char *c = "GATECSIT2017";
    char *p = c;
    printf("%d\n", (int)strlen(c + 2[p] - 6[p] - 1));// 1000 + *(p+2) - *(p+6) - 1
    return 0;                                        // 1000 + 10 = 1010 address = 1 pointing in string
}