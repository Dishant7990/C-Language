#include<stdio.h>
#include<string.h>
int main(){
    char s[] = "Hello..How are you ?";
    printf("--> Note that sizeof and strlen behaves differently\n");
    printf("--> sizeof also includes the \0 character\n");
    printf("\nsize of the string is : %d\n",sizeof(s));
    printf("length of the string is : %d\n",strlen(s));

    printf("%.5s\n",s);
    printf("%6.5s\n",s);
    printf("puts function is used to write string to output screen \nIt automatically takes a new line character after writing a string\n");
    puts(s);
    puts(s);


return 0;
}