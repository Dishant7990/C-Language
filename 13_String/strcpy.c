#include<stdio.h>
#include<string.h>
int main(void){
    // char a[6] = {'H','e','l','l','o','\0'};
       const char a[] = "Hello World!\n";
    char b[5] = {0};
    char c[20] = {0} ;
    strcpy(b , a);
    b[3] = '\0';
    printf("Cpy the string from a to b: %s\n",b );
    printf("String a becomes: %s\n",a);

    printf("B : %s\n", b);
    printf("A : %s\n", a);
    strncpy(c ,a ,2);
    c[2] = '\0';
    printf("C : %s\n", c);
    return 0;
}
